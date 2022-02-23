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
        int flag = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    printf("%d\n", a[i]);
                    flag = 1;
                    break;
                }
            }
            if (flag) break;
        }

        if (!flag) printf("NO\n");
    }
}