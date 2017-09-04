#include <stdio.h>

#define N 102

int main() {

	int test, count[N] = {0}, n, k, vote, gov, i;
	scanf("%d", &test);

	while (test--) {
		gov = 0;
		scanf("%d %d", &n, &k);

		for (i = 1; i <= n; i++) {
			scanf("%d", &vote);
			if(vote == i) {
				count[i] = -1;
			} else if(count[vote] != -1) {
				count[vote]++;
			}
		}

		for (i = 1; i <= n; i++) {
			if(count[i] >= k) {
				gov++;
			}
		}

		printf("%d\n", gov);

		for (i = 1; i <= n; i++) {
			count[i] = 0;
		}

	}

	return 0;
}
