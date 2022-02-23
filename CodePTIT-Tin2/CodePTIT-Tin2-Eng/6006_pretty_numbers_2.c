#include <stdio.h>
#include <string.h>

int solve(char s[]) {
    if (s[strlen(s) - 1] != '8') return 0;
    int sum = 0;
    for (int i = 0; i < strlen(s); i++) {
        sum += s[i] - '0';
    }

    if (sum % 10 == 0) return 1;
    return 0;
}

int main() {
    int t; scanf("%d\n", &t);
    while (t--) {
        char s[1000];
        scanf("%s", s);

        if (solve(s) == 1) printf("YES\n");
        else printf("NO\n");
    }
}