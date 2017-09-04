#include <stdio.h>

typedef long long int ll;

int main() {

	unsigned short int test;
	ll n, m, c, total, i, j;

	scanf("%hu", &test);

	while (test--) {
		scanf("%lld %lld %lld", &n, &m, &c);
		total = n*m;
		if(total < c) total = 0;
		else if (total == c) total = 1;
		else {
			total = 0;
			if(n <= m) {
				for (i = 1; i <= n; i++) {
					if(c%i == 0 && c/i <= m) total++;
				}
			} else {
				for (i = 1; i <= m; i++) {
					if(c%i == 0 && c/i <= n) total++;
				}
			}
		}

		printf("%lld\n", total);

	}

	return 0;
}
