#include <stdio.h>
#include <math.h>
#include <string.h>
#define max(a, b) a > b ? a : b;
#define min(a, b) a < b ? a : b;

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
    int n;
    scanf("%d", &n);
    int a[n][n], maxx = 0, max_i = -1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (primeCheck(a[i][j])) count++;
        }
        if (count > maxx) {
            maxx = count;
            max_i = i;
        }
    }

    printf("%d\n", max_i + 1);
    for (int i = 0; i < n; i++) {
        if (primeCheck(a[max_i][i]))
            printf("%d ", a[max_i][i]);
    }
}