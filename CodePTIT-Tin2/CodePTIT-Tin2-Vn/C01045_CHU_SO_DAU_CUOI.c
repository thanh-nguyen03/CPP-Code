#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

void solve(int n, int *dau, int *cuoi) {
    *cuoi = n % 10;
    while (n) {
        *dau = n % 10;
        n /= 10;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int dau, cuoi;
    solve(n, &dau, &cuoi);

    printf("%d %d", dau, cuoi);
}