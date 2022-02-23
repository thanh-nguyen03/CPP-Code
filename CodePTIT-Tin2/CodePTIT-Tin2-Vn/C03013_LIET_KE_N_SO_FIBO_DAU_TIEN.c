#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    int a1 = 0, a2 = 1, a = a1 + a2;
    printf("%d %d ", a1, a2);
    n -= 2;
    while (n--) {
        printf("%d ", a);
        a1 = a2;
        a2 = a;
        a = a1 + a2;
    }
}