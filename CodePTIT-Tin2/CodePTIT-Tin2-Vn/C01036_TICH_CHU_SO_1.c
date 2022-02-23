#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int product(int n) {
    int p = 1;
    while (n) {
        p *= n % 10;
        n /= 10;
    }

    return p;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", product(n));
}