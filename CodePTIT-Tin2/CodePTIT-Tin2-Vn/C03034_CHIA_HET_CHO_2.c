#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int count =  n % 2 == 0 ? 1 : 0;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                if (i % 2 == 0) {
                    count++;
                }
                int q = n / i;
                if (q % 2 == 0 && q != i) {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
}