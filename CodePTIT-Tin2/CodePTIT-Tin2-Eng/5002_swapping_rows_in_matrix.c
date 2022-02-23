#include <stdio.h>

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int c, d;
    scanf("%d%d", &c, &d);
    for (int i = 0; i < m; i++) {
        if (i == (c - 1)) {
            for (int j = 0; j < n; j++) {
                printf("%d ", a[d - 1][j]);
            }
        }
        else if (i == (d - 1)) {
            for (int j = 0; j < n; j++) {
                printf("%d ", a[c - 1][j]);
            }
        }
        else{
            for (int j = 0; j < n; j++) {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
}