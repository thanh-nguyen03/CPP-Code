#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int solve(int n) {
    int res = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        res += i + n / i;
        if (i * i == n) {
            res -= i;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 6; i < n; i++) {
        
    }
}