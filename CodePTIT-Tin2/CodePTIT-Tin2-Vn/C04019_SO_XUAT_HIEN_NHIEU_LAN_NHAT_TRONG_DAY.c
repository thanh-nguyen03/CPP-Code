#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n + 10], b[100000] = {0}, max = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            b[a[i]]++;
            if (b[a[i]] > max) max = b[a[i]];
        }

        for (int i = 0; i < n; i++) {
            if (b[a[i]] == max) {
                printf("%d ", a[i]);
                b[a[i]] = -1;
            }
        }
        printf("\n");
    }
}