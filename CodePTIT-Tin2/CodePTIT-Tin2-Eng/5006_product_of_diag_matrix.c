#include <stdio.h>

int main() {
    int t, count = 1;;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[30][30] = {0};
        int line = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < line; j++) {
                a[i][j] = j + 1;
            }
            line++;
        }
        int b[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                b[i][j] = a[j][i];
            }
        }

        printf("Test %d:\n", count++);
        int c[60][60] = {0};
        // Tinh tich
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // In ma tran ket qua
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
}