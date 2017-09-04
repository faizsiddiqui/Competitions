#include <stdio.h>

typedef long long int ll; //lld
typedef unsigned int ui; // %u
typedef unsigned short int usi; //%hu

#define TRUE 1
#define FALSE 0
#define mod %

int main() {

	usi test, n, m, u, v;
	scanf("%hu", &test);

	while (test--) {
		scanf("%hu %hu", &n, &m);
		n = n - 2 * m;
		while (m--) {
			scanf("%hu %hu", &u, &v);
		}
		if(n mod 2 == 0) printf("%s\n", "yes");
		else printf("%s\n", "no");
	}

	return 0;
}
