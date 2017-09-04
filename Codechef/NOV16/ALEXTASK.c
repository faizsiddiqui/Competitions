#include <stdio.h>

typedef long long int ll; //lld
typedef unsigned int ui; // %u
typedef unsigned short int usi; //%hu

#define N 500

ll gcd(ll, ll);
ll lcm(ll, ll);

int main() {

	ll arr[N], min, temp;
	usi test, n, i, j;
	scanf("%hu", &test);

	while (test--) {

		scanf("%hu", &n);
		i = temp = min = 0;

		while(i < n) scanf("%lld", &arr[i++]);

		min = lcm(arr[0], arr[1]);

		i = 0;

		while (i < n) {
			for (j = i + 1; j < n; j++) {
				temp = lcm(arr[i], arr[j]);
				if(temp < min) {
					min = temp;
				}
			}
			i++;
		};

		printf("%lld\n", min);

	}

	return 0;
}

ll gcd(ll a, ll b)
{
    if (b == 0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
	return (a * b) / gcd(a, b);
}
