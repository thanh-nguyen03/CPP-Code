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
        for (int j = 0; j < n; j++) {
            if (j == (c - 1)) {
                printf("%d ", a[i][d - 1]);
            }
            else if (j == (d - 1)) {
                printf("%d ", a[i][c - 1]);
            }
            else {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
}