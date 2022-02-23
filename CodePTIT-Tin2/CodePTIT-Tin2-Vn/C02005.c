#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n + i - 1; j++) {
            if (j < i) {
                printf("~");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
}