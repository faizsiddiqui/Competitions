#include <stdio.h>
#include <stdlib.h>

int cmp(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main() {

	int test, n, i;

	scanf("%d", &test);

	while (test--) {

		scanf("%d", &n);

		int arr[n];

		for (i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}

		qsort(arr, n, sizeof(int), cmp);

		for (i = 0; i < n/2; i++) {
			printf("%d %d ", arr[i], arr[n-i-1]);
		}

		if(n % 2 != 0) printf("%d", arr[i]);

	}

	return 0;
}
