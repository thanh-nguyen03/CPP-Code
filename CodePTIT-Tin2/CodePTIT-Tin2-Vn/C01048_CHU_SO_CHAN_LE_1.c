#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    int odd = 0, even = 0;
    while (n) {
        int last = n % 10;
        if (last % 2 == 0) even++;
        else odd++;

        n /= 10;
    }
    printf("%d %d", odd, even);
}