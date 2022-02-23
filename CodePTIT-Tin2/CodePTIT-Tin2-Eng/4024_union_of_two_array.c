#include <stdio.h>

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m + 10], b[n + 10];
    int p[10000] = {0}, o[10000] = {0};
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
        p[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
        o[b[i]]++;
    }
    
    for (int i = 0; i < 2000; i++) {
        if (p[i] >= 1 || o[i] >= 1) printf("%d ", i);
    }
}