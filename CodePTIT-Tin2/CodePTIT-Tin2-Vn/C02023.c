#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int max = a > b ? a : b;
    char s = 'a' + max - 1;

    int count = 0;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i && count < b; j++) {
            printf("%c", s - j + 1);
            count++;
        }
        for (int j = 2 ; j <= b && count < b; j++) {
            printf("%c", s - i + 1);
            count++;
        }
        printf("\n");
        count = 0;
    }
}