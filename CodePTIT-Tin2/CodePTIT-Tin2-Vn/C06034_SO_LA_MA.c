#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int convert(char a) {
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
        int sum = 0;
        for (int i = 0; i < strlen(s); i++) {
            int curr = convert(s[i]);
            int next = convert(s[i + 1]);

            if (curr < next) {
                sum += next - curr;
                i++;
            }
            else sum += curr;
        }
        printf("%d\n", sum);
    }
}