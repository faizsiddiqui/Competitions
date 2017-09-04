#include <bits/stdc++.h>

using namespace std;

int main() {

	unsigned short int test;
	string l1, l2, l3;
	bool firstZero;
	int n, access, ones;

	scanf("%hu", &test);

	while (test--) {
		cin >> l1 >> l2 >> l3 >> n;

		firstZero = false;
		access = ones = 0;

		//trying to find 0 bit in l3
		for (string::reverse_iterator ch=l3.rbegin(); ch!=l3.rend(); ++ch) {
			if(*ch == '0' && firstZero == false) {
				firstZero = true;
				access++;
			} else if(*ch == '1' && firstZero == true) access++;
		}

		if(firstZero == false) { //unable to find 0 bit in l3

			//trying to find 0 bit in l2
			for (string::reverse_iterator ch=l2.rbegin(); ch!=l2.rend(); ++ch) {
				if(*ch == '0' && firstZero == false) {
					firstZero = true;
					access++;
				} else if(*ch == '1') {
					ones++;
					if (firstZero == true) access++;
				}
			}

			if(firstZero == false) { //unable to find 0 bit in l2 as well (i.e., l2 and l3 just have 1's)

				//trying to find 0 bit in l1
				for (string::reverse_iterator ch=l1.rbegin(); ch!=l1.rend(); ++ch) {
					if(*ch == '0' && firstZero == false) {
						firstZero = true;
						access++;
					} else if(*ch == '1' && firstZero == true) access++;
				}

				if(firstZero == false) { //unable to find 0 bit in l1 also
					access++;
				}

			} else {
				//since we have found 0 bit in l2 string's first part, now we only need to count 1's in (n-1) l2 part and l1
				access = ones * (n-1) + access;
				for (string::iterator ch=l1.begin(); ch < l1.end(); ch++)
					if(*ch == '1') access++;
			}
		} else { //found 0 bit in l3
			//counting 1's in l2 and l1
			for (string::iterator ch=l2.begin(); ch < l2.end(); ch++)
				if(*ch == '1') access += n;
			for (string::iterator ch=l1.begin(); ch < l1.end(); ch++)
				if(*ch == '1') access++;
		}
		cout << access << "\n";
	}
	return 0;
}
