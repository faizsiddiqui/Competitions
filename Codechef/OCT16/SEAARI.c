#include <stdio.h>
#include <math.h>

typedef long long int ll;

#define N 1000001

inline void scanint(long long *);
inline void printint(long long);

int main() {

	int n, k, d, i;
	scanf("%d %d %d", &n, &k, &d);
	ll arr[n];

	for (i = 0; i < n; i++) {
		scanint(&arr[i]);
		scanf("%lld", &arr[i]);
	}

	return 0;
}

inline void scanint(long long *x)
{
	register char c = getchar_unlocked();
	*x = 0;
	for(; (c<48)||(c>57);c = getchar_unlocked());
	for(; (c>47)&&(c<58);c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48);
}

inline void printint(long long n)
{
	if(n == 0)
	{
		putchar_unlocked('0');
		putchar_unlocked('\n');
	}
	else if(n == -1)
	{
		putchar_unlocked('-');
		putchar_unlocked('1');
		putchar_unlocked('\n');
	}
	else
	{
		char buf[11];
		buf[10] = '\n';
		int i = 9;
		while(n)
		{
			buf[i--] = n % 10 + '0';
			n /= 10;
		}
		while(buf[i] != '\n')
			putchar_unlocked(buf[++i]);
	}
}
