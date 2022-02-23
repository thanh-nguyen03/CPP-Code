#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    int val = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= i; j++) {
                printf("%d ", val++);
            }
        }
        else {
            int t = val + i - 1;
            for (int j = 1; j <= i; j++) {
                printf("%d ", t);
                t--;
                val++;
            }
        }
        printf("\n");
    }
}