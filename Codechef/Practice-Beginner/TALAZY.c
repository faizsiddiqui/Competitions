#include <stdio.h>
#include <math.h>

typedef long long int ll;

ll b;

ll calc(ll n, ll m) {
	if (n == 1) return m;
	else {
		int mid = ceil(n / 2.0);
		return ((mid * m + b) + calc(n-mid, 2*m));
	}
}

int main() {
	int test;
	scanf("%d", &test);

	ll n, m;

	while (test--) {
		scanf("%lld %lld %lld", &n, &b, &m);
		printf("%lld\n", calc(n, m));
	}

	return 0;
}
