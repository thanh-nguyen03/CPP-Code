#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

ll solve(int n) {
    ll p = 1;
    if (n % 2 == 0) p *= 2;
    while (n % 2 == 0) {
        n /= 2;
    }

    if (n % 3 == 0) p *= 3;
    while (n % 3 == 0) {
        n /= 3;
    }

    if (n == 1) return p;
    int temp = n;
    for (int i = 5; i <= sqrt(temp) && n > 1; i += 6) {
        int flag = 0;
        while (n % i == 0) {
            n /= i;
            flag = 1;
        } 
        if (flag) p *= i;
        flag = 0;
        while (n % (i + 2) == 0) {
            n /= (i + 2);
            flag = 1;
        }
        if (flag) p *= (i + 2);
    }

    if (n > 4) p *= n;

    return p;
}

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%lld\n", solve(n));
    }
}