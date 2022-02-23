#include <stdio.h>
#include <math.h>

int check(int n) {
    int sum = 1;
    double q = sqrt(n);
    if (q == (int)q) sum += q;
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) sum += i + (n / i);
    }

    if (sum == n) return 1;
    return 0;
} 

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int max = a > b ? a : b;
    int min = a < b ? a : b;
    for (int i = min; i <= max; i++) {
        if (check(i) == 1) printf("%d ", i);
    }
}