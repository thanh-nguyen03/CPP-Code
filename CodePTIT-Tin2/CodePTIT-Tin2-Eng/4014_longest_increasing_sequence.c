#include <stdio.h>

int main() {
    int t, c = 1;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n + 10], count = 1, max = 1;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (i >= 1) {
                if (a[i] > a[i - 1]) count++;
                else count = 1;

                if (count > max) max = count;
            }
        }

        printf("Test %d:\n%d\n", c++, max);
        count = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i - 1]) count++;
            else count = 1;

            if (count == max) {
                for (int j = i - max + 1; j <= i; j++) {
                    printf("%d ", a[j]);
                }
                printf("\n");
            }
        }
    }
}