#include <stdio.h>

int main() {
    int t, count = 1;;
    scanf("%d", &t);
    while (t--) {
        int m, n;
        scanf("%d%d", &m, &n);
        int a[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        int b[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                b[i][j] = a[j][i];
            }
        }

//        printf("Test %d:\n", count++);
        int c[60][60] = {0};
        // Tinh tich
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                for (int k = 0; k < n; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // In ma tran ket qua
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
}
