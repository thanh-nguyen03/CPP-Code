#include <stdio.h>
#include <math.h>

int check(int n) {
	while (n) {
        int l = n % 10;
        n /= 10;
        int s = n % 10;

        if (l < s) return 0;
	}

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
            if (check(i) == 1) printf("%d ", i);
        }
        printf("\n");
    }
}

