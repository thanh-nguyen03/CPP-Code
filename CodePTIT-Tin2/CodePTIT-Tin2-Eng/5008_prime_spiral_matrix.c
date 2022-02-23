#include <stdio.h>

int main(){
    // Sang nguyen to
    int s[20000] = {0};
    s[0] = 1; s[1] = 1;
    for (int i = 2; i < 10000; i++) {
        if (s[i] == 0) {
            for (int j = i*i; j < 10000; j += i) {
                s[j] = 1;
            }
        }
    }

    int b[1000];
    int u = 0;
    for (int i = 0; i < 1000; i++) {
        if (s[i] == 0) {
            b[u++] = i;
        }
    }

    int t; scanf("%d", &t);
    int count = 1;
    while (t--) {
        int n; scanf("%d", &n);
        int arr[n][n];
        int mark = 0, val = 0, col = n - 1, row = n - 1;
        while (mark <= n / 2) {
            for (int i = mark; i <= col; i++) arr[mark][i] = b[val++];
            for (int i = mark + 1; i <= row; i++) arr[i][col] = b[val++];
            for (int i = col - 1; i >= mark; i--) arr[row][i] = b[val++];
            for (int i = row - 1; i > mark; i--) arr[i][mark] = b[val++];
            mark++; row--; col--;
        }
        printf("Test %d:\n", count++);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
}

