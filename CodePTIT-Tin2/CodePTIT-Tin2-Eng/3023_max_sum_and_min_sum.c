#include <stdio.h>
#include <string.h>

typedef long long ll;

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        char a[100], b[100];
        scanf("%s%s", &a, &b);
        ll m = 0, n = 0;

        // Min
        for (int i = 0; i < strlen(a); i++) {
            if (a[i] == '6') a[i] = '5';
            m = m *10 + (a[i] - '0');
        }
        for (int i = 0; i < strlen(b); i++) {
            if (b[i] == '6') b[i] = '5';
            n = n *10 + (b[i] - '0');
        }
        printf("%lld ", m + n);
        m = 0; n = 0;
        // Max
        for (int i = 0; i < strlen(a); i++) {
            if (a[i] == '5') a[i] = '6';
            m = m *10 + a[i] - '0';
        }
        for (int i = 0; i < strlen(b); i++) {
            if (b[i] == '5') b[i] = '6';
            n = n *10 + b[i] - '0';
        }

        printf("%lld\n", m + n);
    }
}