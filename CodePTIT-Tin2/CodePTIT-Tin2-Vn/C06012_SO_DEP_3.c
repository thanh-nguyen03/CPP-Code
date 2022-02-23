#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int snt(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int palindrome(char s[]) {
    int l = strlen(s);
    for (int i = 0; i < l/2; i++) {
        if (s[i] != s[l - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        char s[1000];
        scanf("%s", s);
        int flag = 1;
        if (palindrome(s)) {
            for (int i = 0; i < strlen(s); i++) {
                if (snt(s[i] - '0') == 0) {
                    flag = 0;
                    break;
                }
            }
        }
        else flag = 0;

        flag == 1 ? printf("YES\n") : printf("NO\n");
    }
    
}