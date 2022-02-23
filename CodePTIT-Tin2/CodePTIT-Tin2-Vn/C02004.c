#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n + i - 1; j++) {
            if (j < i - 1) {
                printf("~");
            }
            else {
                if (j == i - 1 || j == n + i - 2 || i == n || i == 1) {
                    printf("*");
                }
                else printf(".");
            }
        }
        printf("\n");
    }
}