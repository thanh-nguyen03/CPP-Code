#include <stdio.h>
#include <math.h>
#include <string.h>

#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b

typedef long long ll;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        int a, b;
        scanf("%d%d", &a, &b);
        int max = max(a, b);
        int min = min(a, b);
        printf("%d\n", gcd(max, min));
    }
}