#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int snt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int fibo(int n) {
    int sum = 0, temp = n;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    int a1 = 0, a2 = 1, a = a1 + a2;
    while (a < sum) {
        a1 = a2;
        a2 = a;
        a = a1 + a2;
    }
    if (a == sum) return 1;
    return 0;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b) swap(&a, &b);
    for (int i = a; i < b; i++) {
        if (snt(i)) {
            if (fibo(i)) {
                printf("%d ", i);
            }
        }
    }
}
int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}