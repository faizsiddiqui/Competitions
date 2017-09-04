#include<stdio.h>
#include <stdbool.h>

int main() {

	unsigned short int test, n, c, cookie, winner, i, j, max, points, countZero, countPoints;
	bool tie;

	scanf("%hu", &test);
	int cookieCount[6]= {0};

	while (test--) {
		scanf("%hu", &n);
		max = points = countZero = countPoints = 0;
		tie = false;
		for (j = 0; j < n; j++) {
			countZero = countPoints = 0;
			for (i = 0; i < 6; i++) cookieCount[i] = 0;
			scanf("%hu", &c);
			points = c;
			do {
				scanf("%hu", &cookie);
				cookieCount[cookie - 1]++;
			} while (--c);
			while (countZero < 3) {
				countZero = 0;
				countPoints = 0;
				for (i = 0; i < 6; i++) {
					if(cookieCount[i] == 0) {
						countZero++;
					} else {
						cookieCount[i]--;
						countPoints++;
					}
				}
				if(countPoints == 4) points++;
				else if(countPoints == 5) points += 2;
				else if(countPoints == 6) points += 4;
			}
			if(points >= max) {
				if(points == max) tie = true;
				else tie = false;
				max = points;
				winner = j;
			}
		}
		if(tie) printf("%s\n", "tie");
		else if(winner == 0) printf("%s\n", "chef");
		else printf("%hu\n", winner + 1);
	}

}
