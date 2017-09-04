#include <stdio.h>
#include<string.h>

int main() {

	unsigned int test, oneCount, zeroCount, possible, i, length, mid, rem;
	char seq[100005];

	scanf("%d", &test);

	while (test--) {
		possible = 1;
		i = length = mid = rem = oneCount = zeroCount = 0;

		scanf("%s", &seq);

		length = strlen(seq);
		mid = length / 2;
		rem = length % 2;

		if (rem == 1) {
			seq[mid] == '1' ? oneCount++ : zeroCount++;
		}

		while (i < mid) {

			if(seq[i] == '1' && oneCount < 2) oneCount++;
			if(seq[length - i -1] == '1' && oneCount < 2) oneCount++;

			if(seq[i] == '0' && zeroCount < 2) zeroCount++;
			if(seq[length - i -1] == '0' && zeroCount < 2) zeroCount++;

			if(oneCount > 1 && zeroCount > 1) {
				possible = 0;
				break;
			}

			i++;

		};

		if(!possible || zeroCount == 0 && oneCount > 1 || oneCount == 0 && zeroCount > 1) {
			printf("%s\n", "No");
		} else {
			printf("%s\n", "Yes");
		}

	}

}
