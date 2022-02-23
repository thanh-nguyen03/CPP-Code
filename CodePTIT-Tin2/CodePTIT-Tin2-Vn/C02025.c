#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int row = 0, col = row;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            printf("%c", '@' + col);
            if (col < b - 1) col++;
        }
        if (row < b - 1) row++;
        col = row;
        printf("\n");
    }
}