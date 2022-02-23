#include <stdio.h>
int main() {
	int n; scanf("%d", &n);
	int arr[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
	int sum = 0, temp = n;
	while (n) {
		int last = n % 10;
		sum += arr[last];
		n /= 10;
	}
	temp == sum ? printf("1") : printf("0");
}

