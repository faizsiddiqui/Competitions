#include <stdio.h>
#include <math.h>

typedef long long int ll;

#define N 1000001

inline void scanint(long long *);
inline void printint(long long);

struct point {
	ll x, y;
};

int main() {

	int n, i = 0, j = 0, point1, point2;
	ll xsum = 0, ysum = 0, xref, yref, dis, temp;

	scanf("%d", &n);

	struct point points[n];

	do {
		scanf("%lld %lld", &points[i].x, &points[i].y);
		xsum = points[i].x;
		ysum = points[i].y
		printf("%d\n", 0);
		i++;
	} while(i < n) {

		xsum += points[i].x;
		ysum += points[i].y;

		xref = xsum / i;
		yref = ysum / i;

		for (j = 0; j < count; i++) {
			/* code */
		}

		i++;
	};

	for (i = 0; i < n; i++) {

		// for(j = 0; j < i; j++) {
		// 	temp = sqrt(pow(points[j].x - xref, 2) + pow(points[j].y - yref, 2));
		// 	if(temp > dis) {
		// 		dis = temp;
		// 		point1 = j;
		// 	}
		// }
		//
		// for (j = 0; j < i; j++) {
		// 	temp = sqrt(pow(points[j].x - points[point1].x, 2) + pow(points[j].y - points[point1].y, 2));
		// 	if(temp > dis) {
		// 		dis = temp;
		// 		point2 = j;
		// 	}
		// }
		//
		// printf("%lld\n", pow(points[point1].x - points[point2].x, 2) + pow(points[point1].y - points[point2].y, 2));

	}

	for (i = 0; i < n; i++) {
		printf("%lld %lld\n", points[i].x, points[i].y);
	}

	return 0;
}
