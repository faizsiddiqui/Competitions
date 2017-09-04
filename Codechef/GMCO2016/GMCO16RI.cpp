#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main() {

	unsigned short int test, i = 1;
	cin >> test;

	string str;
	char ch;
	set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

	do {
		cin >> str;
		ch = str.back();
		if(ch == 'y') {
			cout << "Case #" << i << ": " << str << " is ruled by " << "nobody." << endl;
		} else if (vowels.find(ch) != vowels.end()) {
			cout << "Case #" << i << ": " << str << " is ruled by " << "a queen." << endl;
		} else if(str.compare("Morningstar") == 0) {
			break;
		} else {
			cout << "Case #" << i << ": " << str << " is ruled by " << "a king." << endl;
		}
	} while (i++ < test);

	return 0;
}
