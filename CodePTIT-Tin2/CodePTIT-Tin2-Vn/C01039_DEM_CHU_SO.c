#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int dem(int n) {
    int count = 0;
    while (n) {
        count++;
        n /= 10;
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", dem(n));
}