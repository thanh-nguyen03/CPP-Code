#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (i >= 1) {
            int key = a[i];
            int j = i - 1;

            while (j >= 0 && a[j] > key) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = key;
            
            
            printf("Step %d: ", i);
            for (int k = 0; k <= i; k++) printf("%d ", a[k]);
            printf("\n");
            
        }
        else {
            printf("Step 0: %d\n", a[0]);
        }
    }
}