#include <stdio.h>

int main() {

	int n, q, min = 1000000001, max = 0, val;
	scanf("%d %d", &n, &q);

	while (n--) {
		scanf("%d", &val);
		if(val > max) max = val;
		if(val < min) min = val;
	}

	while (q--) {
		scanf("%d", &val);
		printf("%s\n", (val >= min && val <= max) ? "Yes" : "No" );
	}

	return 0;
}
