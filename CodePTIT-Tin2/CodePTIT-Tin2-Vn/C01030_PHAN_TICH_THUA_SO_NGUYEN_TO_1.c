#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

void solve(int n) {
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }
    while (n % 3 == 0) {
        printf("3 ");
        n /= 3;
    }

    int temp = n;
    for (int i = 5; i <= sqrt(temp) && n > 1; i += 6) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
        
        while (n % (i + 2) == 0) {
            printf("%d ", i + 2);
            n /= (i + 2);
        }
    }
    if (n > 4) printf("%d", n);
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        solve(n);
    }
}