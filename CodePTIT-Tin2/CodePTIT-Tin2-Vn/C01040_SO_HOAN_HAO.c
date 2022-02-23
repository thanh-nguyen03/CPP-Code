#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int solve(int n) {
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            int q = n / i;
            if (q != i) sum += q;
        }
    }

    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int r = solve(n);

    r == n ? printf("1") : printf("0");
}