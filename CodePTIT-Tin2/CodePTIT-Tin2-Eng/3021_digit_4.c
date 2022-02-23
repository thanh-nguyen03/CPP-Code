#include <stdio.h>
#include <math.h>

int digit(int n) {
	while (n) {
		if (n % 10 == 4) return 0;

		n /= 10;
	}

	return 1;
}

int palSum(int n) {
	int temp = n, sum = 0, r = 0;

	while (temp) {
		sum += temp % 10;
		r = r*10 + temp % 10;

		temp /= 10;
	}

	if (sum % 10 != 0) return 0;
	if (r != n) return 0;

	return 1;
} 

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n; 
        scanf("%d", &n);

        int count = 0;
        double l = pow(10, n - 1);
        double u = pow(10, n);

        for (int i = (int)l; i < (int)u; i++) {
            if (digit(i) == 1) {
                if (palSum(i) == 1) {
                    printf("%d ", i);
                }
            }
        }
        printf("\n");
    }
}

