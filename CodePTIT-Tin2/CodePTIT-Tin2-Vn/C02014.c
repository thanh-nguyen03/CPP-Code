#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    int size = 2*n - 1;
    int a[size + 10][size + 10];
    int first = 0, last = size - 1;
    while (n) {
        for (int i = first; i <= last; i++) {
            for (int j = first; j <= last; j++) {
                if (i == first || i == last || j == first || j == last) {
                    a[i][j] = n;
                }
            }
        }

        n--; first++; last--;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}