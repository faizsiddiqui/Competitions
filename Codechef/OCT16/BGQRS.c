#include <stdio.h>
typedef long long int ll;

#define N 100000
#define M 1000

inline void scan(ll *);
inline void trailingZeroes(ll, int*, int*);

struct Hash {
	ll key;
	int twos, fives;
} preCalc[M];

int main() {

	unsigned short int test, t;
	int n, m, l, r, i, j, sumOfZeros, twos, fives;
	ll x, arr[N];
	struct Hash temp;

	scanf("%hu", &test);

	while (test--) {
		sumOfZeros = 0;
		scanf("%d %d", &n, &m);

		for (i = 0; i < n; i++) {
			scan(&arr[i]);
		}

		for (i = 0; i < m; i++) {
			scanf("%hu", &t);
			switch (t) {
				case 1:
					scanf("%d %d %lld", &l, &r, &x);
					for (j = l; j <= r; j++)
						arr[j-1] *= x;
					break;
				case 2:
					scanf("%d %d %lld", &l, &r, &x);
					for (j = l; j <= r; j++)
						arr[j-1] = (j - l  + 1) * x;
					break;
				case 3:
					scanf("%d %d", &l, &r);
					twos = fives = 0;
					for (j = l; j <= r; j++) {
					    temp = preCalc[arr[j-1]%M];
						if (temp.key && temp.key == arr[j-1]) {
							twos += temp.twos;
							fives += temp.fives;
						} else {
							trailingZeroes(arr[j-1], &twos, &fives);
						}
					}
					if(twos >= fives)
						sumOfZeros += fives;
					else sumOfZeros += twos;
					break;
			}

		}

		printf("%d\n", sumOfZeros);

	}

	return 0;
}

inline void trailingZeroes(ll n, int* twos, int* fives) {
	int ttwos = 0, tfives = 0, pos = n%M;
	preCalc[pos].key = n;
	while (n%2 == 0)
    {
		ttwos++;
		(*twos)++;
        n /= 2;
    }
	while (n%5 == 0) {
		tfives++;
		(*fives)++;
		n /= 5;
	}
	preCalc[pos].twos = ttwos;
	preCalc[pos].fives = tfives;
}

inline void scan(ll *x)
{
	*x = 0;
	register char c = getchar();
	for(; (c<48)||(c>57);c = getchar());
	for(; (c>47)&&(c<58);c = getchar())
		*x = (ll)((((*x)<<1) + ((*x)<<3)) + c - 48);
}
