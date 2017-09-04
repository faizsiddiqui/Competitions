#include <stdio.h>

typedef unsigned short int usi; //%hu

#define mod %
#define B 8

int main() {

	usi test, berth, rem;
	scanf("%hu", &test);

	char suffix[B][3] = {"SL", "LB", "MB", "UB", "SU"};

	while (test--) {

		scanf("%hu", &berth);
		rem = berth mod B;

		if(rem == 0) berth--;
		else if(rem == 7) {
			berth++;
			rem = 4;
		}
		else if(rem < 4) berth += 3;
		else {
			berth -= 3;
			rem -= 3;
		}

		printf("%hu%s\n", berth, suffix[rem]);

	}

	return 0;
}
