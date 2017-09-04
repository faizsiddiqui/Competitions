#include <stdio.h>

#define mod %

typedef long long int ll; //lld
typedef unsigned int ui; // %u
typedef unsigned short int usi; //%hu
typedef enum { false=0, true=1 } bool;

int main() {

	usi test;
	bool val;
	ll n, i, monthly, fine;
	scanf("%hu", &test);

	while (test--) {
		scanf("%lld\n", &n);
		bool arr[n];
		i = fine = 0;
		monthly = n;

		while(i < n) scanf("%lld", &arr[i++]); //scanning the array
		i = 0;

		while(i < n) {
			if(arr[i] == false) fine++;
			else {
				monthly--;
				if(fine > 0) fine++;
			}
			i++;
		}
		printf("%lld\n", monthly*1000 + fine*100);
	}

	return 0;
}
