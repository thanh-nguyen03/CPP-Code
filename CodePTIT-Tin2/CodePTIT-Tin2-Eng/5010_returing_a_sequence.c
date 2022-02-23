#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    int b[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int a[n];
    if (n <= 2) {
        a[0] = (b[0][1]) / 2;
    }
    else {
        a[0] = (b[0][1] + b[1][2] + b[2][0]) / 2 - b[1][2];
    }

    printf("%d ", a[0]);
    for (int i = 1; i < n; i++) {
        a[i] = b[i-1][i] - a[i-1];
        printf("%d ", a[i]);
    }
}