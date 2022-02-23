#include <stdio.h>
#include <math.h>
#include <string.h>

#define max(a, b) a > b ? a : b;
typedef long long ll;

int main() {
    int t, number = 1;
    scanf("%d\n", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n + 10];
        scanf("%d", &a[0]);

        int curr = 1, maxx = 1;
        for (int i = 1; i < n; i++) {
            scanf("%d", &a[i]);

            if (a[i] > a[i - 1]) {
                curr++;
            }
            else curr = 1;

            maxx = max(maxx, curr);
        }

        printf("Test %d:\n", number++);
        printf("%d\n", maxx);
        curr = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i - 1]) {
                curr++;
            }
            else curr = 1;
            if (curr == maxx) {
                for (int j = i - maxx + 1; j < i + 1; j++) {
                    printf("%d ", a[j]);
                }
                printf("\n");
            }
        }

        printf("\n");
    }
}