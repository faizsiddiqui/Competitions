#include<stdio.h>

int main() {

	int n, i = 0;
	scanf("%lld", &n);

	int arr[n];
	long long sum = 0, avg = 0, min, multiplier;

	for(;i<n; i++) {
		scanf("%lld", &arr[i]);
		sum+=arr[i];
	}

	avg = sum/n;
	min = avg;
	i = sum = 0;

	for(;i<n; i++) {
		if(arr[i] >= avg) {
			int diff = arr[i] - avg;
			if(diff >= 0 && min > diff) {
				min = diff;
				multiplier = arr[i];
			}
			sum++;
		}
	}

	printf("%lld", sum*=multiplier);

}
