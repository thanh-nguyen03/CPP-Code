#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

void solve(int n) {
    while (n % 2 == 0) {
        printf("2");
        n /= 2;
        if (n > 1) printf("x");
    }
    while (n % 3 == 0) {
        printf("3");
        n /= 3;
        if (n > 1) printf("x");
    }

    int temp = n;
    for (int i = 5; i <= sqrt(temp) && n > 1; i += 6) {
        while (n % i == 0) {
            printf("%d", i);
            n /= i;
            if (n > 1) printf("x");
        }
        
        while (n % (i + 2) == 0) {
            printf("%d", i + 2);
            n /= (i + 2);
            if (n > 1) printf("x");
        }
    }
    if (n > 4) printf("%d", n);
}

int main() {
    int n;
    scanf("%d", &n);
    solve(n);
}