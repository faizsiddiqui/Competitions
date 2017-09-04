#include <stdio.h>
#include <math.h>

typedef long long int ll;

int main() {

	unsigned short int test;
	ll s, v;
	double k = sqrt(3);

	scanf("%hu", &test);

	while (test--) {
		scanf("%lld %lld", &s, &v);
		printf("%.10lf\n", (2 * s) / (k * v));
	}

	return 0;
}
