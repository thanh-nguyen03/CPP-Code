#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int n; scanf("%d", &n);
    int arr[n][n];
    int mark = 0, val = 1, col = n - 1, row = n - 1;
    while (mark <= n / 2) {
        for (int i = mark; i <= col; i++) arr[mark][i] = val++;
        for (int i = mark + 1; i <= row; i++) arr[i][col] = val++;
        for (int i = col - 1; i >= mark; i--) arr[row][i] = val++;
        for (int i = row - 1; i > mark; i--) arr[i][mark] = val++;
        mark++; row--; col--;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}