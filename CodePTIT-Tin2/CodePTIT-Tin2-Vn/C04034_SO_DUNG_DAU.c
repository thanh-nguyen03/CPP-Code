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
        int a[n + 10];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n - 1; i++) {
            int flag = 1;
            for (int j = i + 1; j < n; j++) {
                if (a[j] >= a[i]) {
                    flag = 0;
                    break;
                }
            }
            if (flag) printf("%d ", a[i]);
        }

        printf("%d\n", a[n - 1]);
    }
}