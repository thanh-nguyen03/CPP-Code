#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int row = a < b ? a - 1 : b - 1, col = row;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            printf("%c", 'A' + col);
            if (col < b - 1) col++;
        }
        if (row < i && a > b) row--;
        else if (row < b && a <= b) row--;
        col = row;
        printf("\n");
    }
}