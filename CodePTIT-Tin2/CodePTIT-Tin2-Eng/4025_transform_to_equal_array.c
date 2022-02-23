#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n + 10];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int min = 999999999;
    int value = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            count += abs(a[j] - a[i]);
        }
        if (count < min) {
            min = count;
            value = a[i];
        }
    }

    printf("%d %d", min, value);
}