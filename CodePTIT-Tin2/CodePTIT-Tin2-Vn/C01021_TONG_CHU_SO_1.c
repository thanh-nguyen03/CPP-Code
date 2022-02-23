#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int tong(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", tong(n));
}