#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    printf("%d ", n / 365);
    n %= 365;
    printf("%d ", n / 7);
    n %= 7;
    printf("%d", n);
}