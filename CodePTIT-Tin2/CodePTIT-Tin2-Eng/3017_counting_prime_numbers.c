#include <stdio.h>
#include <math.h>

int check_prime(int n) {
    int s[10] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0};
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }

    while (n) {
        if (s[n % 10] == 0) return 0;
        n /= 10;
    }

    return 1;
}


int main() {

    int t; scanf("%d", &t);
    while (t--) {
        int a, b; scanf("%d%d", &a, &b);
        int count = 0;
        for (int i = a; i <= b; i++) {
            if (check_prime(i) == 1) count++;
        }

        printf("%d\n", count);
    }
}