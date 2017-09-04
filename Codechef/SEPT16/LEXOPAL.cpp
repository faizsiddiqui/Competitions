#include<stdio.h>
#include<string.h>

int main() {

	short unsigned int test, j, length, mid, rem;
	bool possible;
	char str[12345];

	scanf("%d", &test);

	while (test--) {
		j = length = mid = rem = 0;
		possible = 1;

		scanf("%s", &str);

		length = strlen(str);
		mid = length / 2;
		rem = length % 2;

		for (; j < mid; j++) {
			if(str[j] != str[length - j - 1]) {
 				if(str[j] == '.') str[j] = str[length - j -1];
				else if(str[length - j - 1] == '.') str[length - j -1] = str[j];
				else {
					possible = 0;
					break;
				}
			} else if(str[j] == '.' && str[length - j - 1] == '.') {
				str[j] = str[length - j - 1] = 'a';
			}
		}

		if (possible && rem == 1 && str[mid] == '.') {
			str[mid] = 'a';
		}

		if (possible) printf("%s\n", str);
		else printf("%s\n", "-1");

	}

}
