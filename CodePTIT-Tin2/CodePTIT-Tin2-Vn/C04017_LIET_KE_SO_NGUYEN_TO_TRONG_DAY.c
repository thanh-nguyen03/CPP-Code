#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int snt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n + 10], res[n + 10], count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (snt(a[i])) {
            res[count++] = a[i];
        }
    }

    printf("%d ", count);
    for (int i = 0; i < count; i++) {
        printf("%d ", res[i]);
    }
}