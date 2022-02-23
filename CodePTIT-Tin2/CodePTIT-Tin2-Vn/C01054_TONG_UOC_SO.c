#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

ll calc(int n) {
    ll count = 0;
    while (n % 2 == 0) {
        n /= 2;
        count += 2;
    }
    if (n == 1) return count;
    while (n % 3 == 0) {
        n /= 3;
        count += 3;
    }
    if (n == 1) return count;
    int temp = n;
    for (int i = 5; i <= sqrt(temp); i += 6) {
        while (n % i == 0) {
            n /= i;
            count += i;
        }
        if (n == 1) break;
        while (n % (i + 2) == 0) {
            n /= (i + 2);
            count += (i + 2);
        }
        if (n == 1) break;
    }
    if (n > 4) {
        count += n;
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    ll count = 0;
    while (n--) {
        int a;
        scanf("%d", &a);
        count += calc(a);
    }
    printf("%lld", count);
}