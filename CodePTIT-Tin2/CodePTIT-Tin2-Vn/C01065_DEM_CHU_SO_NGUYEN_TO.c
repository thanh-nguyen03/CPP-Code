#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int primeCheck(int n) {
    if (n < 2) return 0;
    if (n == 2 || n == 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0) return 0;
        if (n % (i + 2) == 0) return 0;
    }

    return 1;
}

int main() {
    ll n;
    scanf("%lld", &n);
    int b[10000] = {0}, max = 0;
    while (n) {
        int last = n % 10;
        if (primeCheck(last) == 1) {
            b[last]++;
        }
        if (last > max) max = last;

        n /= 10;
    }

    for (int i = 2; i <= max; i++) {
        if (b[i] != 0) {
            printf("%d %d\n", i, b[i]);
        }
    }
}