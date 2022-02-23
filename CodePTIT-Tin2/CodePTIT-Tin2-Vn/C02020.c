#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("~");
        }
        int count = 1, curr = 1;
        printf("2");
        for (int j = 4; count < i; j += 2) {
            printf("%d", j);
            count++;
            curr = j;
        }
        count = 1;
        for (int j = curr - 2; count < i - 1; j -= 2) {
            printf("%d", j);
            count++;
        }
        if (i > 1) printf("2\n");
        else printf("\n");
    }
}