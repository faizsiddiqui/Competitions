#include<stdio.h>

int main() {

	int unsigned stacks, max, i = 0, current = 0, ins = 5;
	short unsigned int crane = 0;

	scanf("%d %d", &stacks, &max);

	int boxes[stacks];

	while (i < stacks && scanf("%d", &boxes[i++]) == 1);

	while(ins != 0 && scanf("%d", &ins) == 1) {
		switch (ins) {
			case 1: //move left
				if (current > 0) current--;
				break;
			case 2: //move right
				if (current < stacks - 1) current++;
				break;
			case 3: //pickup box
				if (!crane && boxes[current]) {
					crane++;
					boxes[current]--;
				}
				break;
			case 4: //drop box
				if (crane && boxes[current] < max) {
					crane--;
					boxes[current]++;
				};
				break;
		}
	}

	i = 0;
	while (i < stacks) printf("%d ", boxes[i++]);

}
