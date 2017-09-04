#include <stdio.h>

int main() {

	unsigned short int test, n, m;
	scanf("%hu", &test);

	while (test--) {
		scanf("%hu %hu", &n, &m);
		printf("%d\n", n*(m-1) + m*(n-1)); // (n-1) + (m-1) + 2(n-1)(m-1) = 2mn - m - n
	}

	return 0;
}
