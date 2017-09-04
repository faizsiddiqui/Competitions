#include <stdio.h>

int main() {

	unsigned short int test, bit;
	int n, i, ones;

	scanf("%hu", &test);

	while (test--) {
		ones = 0;
		scanf("%d", &n);

		for (i = 0; i < n; i++) {
			scanf("%hu", &bit);
			if(bit) ones++;
		}

		if(ones % 2 == 0) printf("%d\n", n - ones);
		else printf("%d\n", ones);

	}

	return 0;
}
