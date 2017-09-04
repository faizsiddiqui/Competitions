#include <bits/stdc++.h>

#define N 1000001

typedef long long int ll;

using namespace std;

int main() {

	unsigned short int test;
	int n, i;
	bool flag;
	vector <int> vec(N);
	cin >> test;

	while (test--) {

		flag = true;

		cin >> n;

		for (i = 0; i < n; i++) {
			cin >> vec[i];
		}

		sort(vec.begin(), vec.end(), std::greater<int>());

		for (i = 0; i < n - 1; i++) {
			if(vec[i] - vec[i + 1] > 1) {
				flag = false;
				break;
			}
		}

		if(flag) {
			std::cout << "YES" << std::endl;
		} else {
			std::cout << "NO" << std::endl;
		}

	}

	return 0;
}
