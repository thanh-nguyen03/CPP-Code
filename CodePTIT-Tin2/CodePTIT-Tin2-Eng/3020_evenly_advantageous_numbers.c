#include <stdio.h>

typedef long long ll;

int check(ll n) {
    int c_even = 0, c_odd = 0;
    if ((n % 10) % 2 != 0) return 0;
    while (n) {
        ll curr = n % 10;
        if (curr % 2 == 0) c_even++;
        else c_odd++;

        n /= 10;
    }

    if (c_even <= c_odd) return 0;
    return 1;
}

int main() {
    int t; scanf("%d", &t);
    while (t--) {
        ll n; scanf("%lld", &n);
        if (check(n) == 1) printf("YES\n");
        else printf("NO\n");
    }
}