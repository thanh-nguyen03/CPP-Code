#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= a; i++) {
        printf("%d", i);
        for (int j = i + 1; j <= b; j++) {
            printf("%d", j);
        }
        if (i < b) {
            for (int j = i - 1; j > 0; j--) {
                printf("%d", j);
            }
        }
        else {
            for (int j = b - 1; j > 0; j--) {
                printf("%d", j);
            }
        }
        printf("\n");
    }
}