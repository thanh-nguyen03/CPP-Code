#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        int step = n - 1, count = 0;
        for (int j = i; count < i; j += step, count++, step--) {
            printf("%c ", 'A' - 1 + j);
        }
        printf("\n");
    }
}