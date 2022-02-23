#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    
    int row = 0, col = row;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + col);
            col += 2;
        }
        printf("\n");
        row += 2;
        col = row;
    }
}