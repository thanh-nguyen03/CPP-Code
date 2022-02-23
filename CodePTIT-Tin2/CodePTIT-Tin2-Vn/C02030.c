#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int count = 1, curr = 1;
        printf("@");
        for (int j = 3; count < i; j += 2) {
            printf("%c", '@' - 1 + j);
            count++;
            curr = j;
        }
        count = 1;
        for (int j = curr - 2; count < i - 1; j -= 2) {
            printf("%c", '@' - 1 + j);
            count++;
        }
        if (i > 1) printf("@\n");
        else printf("\n");
    }
}