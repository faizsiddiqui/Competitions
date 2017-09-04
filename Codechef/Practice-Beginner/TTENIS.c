#include <stdio.h>

int main() {

	char str[101];
	unsigned short int test, chef, opp, i;

	scanf("%d", &test);

	while (test--) {
		i = chef = opp = 0;
		scanf("%s", str);
		do {
			if(str[i] == '0') opp++;
			else chef++;

			//printf("score = %c chef = %d opp = %d\n", str[i], chef, opp);

			if(chef >= 11 && chef - 2 >= opp) {
				printf("%s\n", "WIN");
			} else if(opp >= 11 && opp - 2 >= chef) printf("%s\n", "LOSE");

		} while (str[++i] != '\0');
	}

	return 0;
}
