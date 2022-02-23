#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    for (int i = 1; i <= a; i++) {
        int count = 0;
        for (int j = i; j <= b && count < b; j++) {
            printf("%c", 'A' + j - 1);
            count++;
        }

        for (int j = count; count < b; j++) {
            printf("%c", 'A' + b - j - 1);
            count++;
        }

        printf("\n");
    }
}