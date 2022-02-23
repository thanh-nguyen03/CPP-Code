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

        int count = 1;
        for (int i = 1; i < n; i++) {
            int flag = 1;
            for (int j = 0; j < i; j++) {
                if (a[j] > a[i]) {
                    flag = 0;
                    break;
                }
            }
            if (flag) count++;
        }

        printf("%d\n", count);  
    }
}