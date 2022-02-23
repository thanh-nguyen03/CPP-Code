#include <stdio.h>

typedef long long ll;

int findZero(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) return 1;
    }
    return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        ll a[n + 10];
        ll max = 0, curr = 0, max1 = -1000000000;
        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
            curr += a[i];
            if (max < curr) max = curr;
            if (curr < 0) curr = 0;
            if (a[i] > max1) max1 = a[i];
        }

        if (max > 0) printf("%lld\n", max);
        else if (max == 0 && findZero(a, n) == 1) printf("%lld\n", max);
        else printf("%lld\n", max1);
    }
}