#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= a; j++) {
            if (j == 1 || j == a || i == 1 || i == b) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}