#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    int a[n + 10], b[100000] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[a[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (b[a[i]] > 0) {
            printf("%d %d\n", a[i], b[a[i]]);
            b[a[i]] = -1;
        }
    }
}