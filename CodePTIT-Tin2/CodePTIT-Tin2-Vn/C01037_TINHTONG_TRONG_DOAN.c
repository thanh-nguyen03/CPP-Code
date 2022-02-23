#include <stdio.h>
#include <math.h>
#include <string.h>
#define max(a, b) a > b ? a : b;
#define min(a, b) a < b ? a : b;
typedef long long ll;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int m = max(a, b);
    int n = min(a, b);
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    printf("%d", sum);
}