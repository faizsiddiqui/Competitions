#include<stdio.h>

int main() {

	unsigned short int test;
	long long int a, b, c, d, result;

	scanf("%d", &test);

	while (test--) {

		scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

		if(b == c) {
			result = (b-a+1) * (d-c+1) - 1;
		} else if (b < c) {
			result = (b-a+1) * (d-c+1);
		} else {
			if(c >= a) {
				if(d >= b) {
					//result = (c-a) * (d-c+1) + (((d-c) * (d-c+1)) / 2) - (((d-b-1) * (d-b)) / 2);
					result = (2*a*c - 2*a*d - 2*a - b*b + 2*b*d - b - c*c + c + 2*d) / 2;
				} else {
					//result = (c-a) * (d-c+1) + (((d-c) * (d-c+1)) / 2);
					result = ((d - c + 1) * (d + c - 2*a)) / 2;
				}
			} else {
				if(a >= d) result = 0;
				else {
					if(d >= b) {
						//result = (((d-a) * (d-a+1)) / 2) - (((d-b) * (d-b-1)) / 2);
						result = (a*a - 2*a*d - a - b*b + 2*b*d - b + 2*d) / 2;
					} else {
						result = ((d-a) * (d-a+1)) / 2;
					}
				}
			}
		}
		printf("%lld\n", result);
	}
	return 0;
}
