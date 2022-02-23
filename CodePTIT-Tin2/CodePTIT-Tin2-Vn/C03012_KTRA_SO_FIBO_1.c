#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int ktfibo(int n) {
    int a1 = 0, a2 = 1, a = a1 + a2;
    while (a < n) {
        a1 = a2;
        a2 = a;
        a = a1 + a2;
    }

    if (a == n || n == 0) return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    ktfibo(n) == 1 ? printf("1") : printf("0");
}