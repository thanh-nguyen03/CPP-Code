#include <stdio.h>
#include <math.h>
typedef long long ll;

int sum(int n) {
    ll sum = 0;

    while (n) {
        sum += n % 10;
        n /= 10;
    }
    if (sum % 10 == 0) return 1;
    return 0;
}

int pal(ll n) {
    ll temp = n;
    ll pal = 0;
    while (temp) {
        pal = pal * 10 + temp % 10;
        temp /= 10;
    } 
    if (pal == n) return 1;
    return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        ll n;
        scanf("%lld", &n);
        ll l = pow(10, n - 1) + 5;
        ll t = pow(10, n) + 1;

        int count = 0;
        for (ll i = l; i <= t; i++) {
            if (pal(i)) {
                if(sum(i)) {
                    count++;
                }
            }
        }


        printf("%d\n", count);
    }
}