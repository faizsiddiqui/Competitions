#include <stdio.h>

int LeastPrimeDivisor(int element) {
	int mid = element / 2;
}

int max(int num1, int num2) {
	if num1 > num2 ? return num1 : return num2;
}

void update(int *arr, int left, int right) {
	for (int i = left; i < right; i++) arr[i] = arr[i] / LeastPrimeDivisor(arr[i]);
}

int get(int *arr, int left, int right) {
	int result = 1;
	for (int i = left; i < right; i++) {
		result = max(result, LeastPrimeDivisor(arr[i]));
	}
	return result;
}

int main() {

	int test, size, operations, arr[1000], i, left, right;
	unsigned short int type;

	scanf("%d", &test);

	while (test--) {

		scanf("%d %d", &size, &operations);

		for (i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
		}

		for (i = 0; i < operations; i++) {
			scanf("%d %d %d", &type, &left, &right);
			if (type) printf("%d\n", get(arr, left, right));
			else update();
		}

	}

}
