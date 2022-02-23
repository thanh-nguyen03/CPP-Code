#include <stdio.h>
#include <math.h>
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		int temp = n;
		while (temp % 2 == 0) {
				printf("%d ", 2);
				temp /= 2;
		}
		while (temp % 3 == 0) {
			printf("%d ", 3);
			temp /= 3;
		}
		for (int i = 5; i <= n / 2; i += 6) {
			while (temp % i == 0) {
				printf("%d ", i);
				temp /= i;
			}
			while (temp % (i+2) == 0) {
				printf("%d ", i+2);
				temp /= (i+2);
			}
		}

		printf("\n");
	}

}

