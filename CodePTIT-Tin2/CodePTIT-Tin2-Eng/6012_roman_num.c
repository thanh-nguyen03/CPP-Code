#include <stdio.h>
#include <string.h>

typedef long long ll;

int value(char a) {
    if (a == 'I') return 1;
    if (a == 'V') return 5;
    if (a == 'X') return 10;
    if (a == 'L') return 50;
    if (a == 'C') return 100;
    if (a == 'D') return 500;
    if (a == 'M') return 1000;
}

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        char s[1000];
        scanf("%s", s);

        ll res = 0;
        for (int i = 0; i < strlen(s); i++) {
            int curr = value(s[i]);
            int next = value(s[i + 1]);

            if (curr < next) {
                res += next - curr;
                i++;
            }
            else res += curr;
        }

        printf("%lld\n", res);
    }
}