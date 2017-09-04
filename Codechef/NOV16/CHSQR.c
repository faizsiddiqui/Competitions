#include <stdio.h>
#include <math.h>

typedef long long int ll; //lld
typedef unsigned int ui; // %u
typedef unsigned short int usi; //%hu

#define TRUE 1
#define FALSE 0
#define mod %
#define N 400

int main() {

	usi test, k, i, j, num, mid, count;
	scanf("%hu", &test);

	usi arr[N][N];

	while (test--) {

		scanf("%hu", &k);

		if(k == 1) {
			printf("%hu\n", 1);
		} else {

			//initialization
			i = j = 0;
			for (i = 0; i < k; i++) {
				for (j = 0; j < k; j++) {
					arr[i][j] = 0;
				}
			}

			//placing mid element
			mid = (k-1) / 2;
			arr[mid][mid] = k;

			//placing one's
			i = 0;
			j = k - 1;
			while (i < mid) arr[i][i++] = 1;
			while (i < k) arr[i++][j--] = 1;

			//placing k's
			if(k == 3) {
				arr[0][2] = arr[2][0] = k;
			} else {
				i = j = count = 0;
				while (count < mid) {
					if(arr[i][j] == 0) {
						arr[i][j] = k;
						count++;
						i = (i + 1) mod mid;
						j = 0;
						continue;
					}
					j = (j + 1) mod mid;
				}
				i = mid + 1;
				j = k - 1;
				while (i < k) arr[i++][j--] = k;
			}

			//placing other no.'s
			num = 2;
			while(num < k) {
				i = j = count = 0;
				while (count < k) {
					if(arr[i][j] == 0) {
						arr[i][j] = num;
						count++;
						i = (i + 1) mod k;
					}
					j = (j + 1) mod k;
				}
				num++;
			}

			//printing array
			i = j = 0;
			for (i = 0; i < k; i++) {
				for (j = 0; j < k; j++) {
					printf("%hu\t", arr[i][j]);
				}
				printf("\n");
			}
		}
	}

	return 0;
}
