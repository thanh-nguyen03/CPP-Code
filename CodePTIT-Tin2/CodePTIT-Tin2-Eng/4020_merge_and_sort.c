#include <stdio.h>

int main() {
    int t, count = 1;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n + 10], b[n + 10], c[2*n + 10];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        for (int i = 0; i < n; i++) scanf("%d", &b[i]);

        // Sort a
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (a[j] < a[minIndex]) minIndex = j;
            }

            // Interchange
            int temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }

        // Sort b
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (b[j] > b[minIndex]) minIndex = j;
            }

            // Interchange
            int temp = b[i];
            b[i] = b[minIndex];
            b[minIndex] = temp;
        }
        printf("Test %d:\n", count++);
        int e = 0, o = 0;
        for (int i = 0; i < 2*n; i++) {
            if (i % 2 == 0) c[i] = a[e++];
            else c[i] = b[o++];
            printf("%d ", c[i]);
        }
        printf("\n");
    }
}