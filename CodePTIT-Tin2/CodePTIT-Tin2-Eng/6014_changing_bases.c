#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, b;
        scanf("%d%d", &n, &b);
        int a[100000];

        if (n == 0 || b == 10) {
            printf("%d", n);
        }
        else {
            int count = 0;
            while (n) {
                a[count++] = n % b;
                n /= b;
            }

            for (int i = count - 1; i >= 0; i--) {
                if (a[i] >= 10) {
                    printf("%c", a[i] + 'a' - 10 - ('a' - 'A'));
                }
                else printf("%d", a[i]);
            }
        }
        printf("\n");
    }
}