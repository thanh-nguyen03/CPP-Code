#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == 0 || i == n - 1) {
                printf("*");
            }
            else printf(".");
        }
        printf("\n");
    }
}