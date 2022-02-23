#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    // Tao fibo
    int b[1000] = {0};
    b[0] = 0; b[1] = 1;
    for (int i = 2; i < 1000; i++) {
        b[i] = b[i - 1] + b[i - 2];
    }

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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}