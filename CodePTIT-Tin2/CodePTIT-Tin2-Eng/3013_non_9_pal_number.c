#include <stdio.h>

int digit(int n) {
	while (n) {
		if (n % 10 == 9) return 0;

		n /= 10;
	}

	return 1;
}

int pal(int n) {
	int temp = n, r = 0;

	while (temp) {
		r = r*10 + temp % 10;

		temp /= 10;
	}
	if (r != n) return 0;

	return 1;
} 

int main() {
	int n; 
    scanf("%d", &n);

    int count = 0;

	for (int i = 2; i < n; i++) {
		if (digit(i) == 1) {
			if (pal(i) == 1) {
                count++;
				printf("%d ", i);
			}
		}
	}

    printf("\n%d", count);
}

