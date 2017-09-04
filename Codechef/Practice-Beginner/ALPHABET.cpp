#include<stdio.h>
#include<string.h>

int main() {

	char known[26], word[12];
	short int words;

	scanf("%s %d", known, &words);

	while (words--) {
		scanf("%s", word);
		int i, flag = 0;
		for (i = 0; i < strlen(word); i++) {
			if(strchr(known, word[i]) == NULL) {
				flag = 1;
				break;
			}
		}
		if (flag) printf("%s\n", "No");
		else printf("%s\n", "Yes");
	}

}
