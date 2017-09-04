#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef long long int ll; //lld
typedef unsigned int ui; // %u
typedef unsigned short int usi; //%hu

#define TRUE 1
#define FALSE 0
#define mod %
#define N 1000001

int main() {

	ll test, n;
	scanf("%lld", &test);
	double log2v = log10(2);

	while (test--) {
		scanf("%lld", &n);
		n = n - pow(2, round(log10(n) / log2v));
		printf("%lld\n", abs(n));
	}

	return 0;
}
