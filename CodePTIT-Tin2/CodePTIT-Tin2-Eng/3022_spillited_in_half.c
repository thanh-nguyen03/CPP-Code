#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

void solve(ll n) {
    char s[100] = "";
    int flag = 1;
    int i = 0;
    while (n) {
        if (n % 10 == 0) s[i++] = '0';
        else if (n % 10 == 1) s[i++] = '1';
        else if (n % 10 == 8) s[i++] = '0';
        else if (n % 10 == 9) s[i++] = '0';
        else flag = 0;

        if (flag == 0) break;
        n /= 10;
    }

    if (flag == 0) printf("INVALID");
    else {
        int l = i - 1;
        while (s[l] == '0') l--;
        if (l == -1) printf("INVALID");
        else
            for (int j = l; j >= 0; j--) printf("%c", s[j]);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        ll n;
        scanf("%lld", &n);
        solve(n);
        printf("\n");
    }
}