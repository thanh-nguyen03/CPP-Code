#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= a; i++) {
        printf("%d", i);
        int count = 1;
        for (int j = i - 1; j > 0; j--) {
            printf("%d", j);
            count++;
            if (count == b) break;
        }
        if (i < b) {
            for (int j = 2; count < b; j++) {
                printf("%d", j);
                count++;
            }
        }
        else {
            for (int j = i - 1; count < b - 1; j--) {
                printf("%d", j);
                count++;
            }
        }
        printf("\n");
    }
}