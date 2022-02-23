#include <stdio.h>
#include <math.h>
#include <string.h>
#define max(a, b) a > b ? a : b;
#define min(a, b) a < b ? a : b;
typedef long long ll;

int checkPal(char s[]) {
    for (int i = 0; i < strlen(s) / 2; i++) {
        if (s[i] != s[strlen(s) - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int index = 0;
    char a[1005][1005];
    char s[1005];
    int mark[1005] = {0};
    int lenMax = 0;
    while (scanf("%s", s) != -1) {
        if (checkPal(s) == 1) {
            int j = -1;
            lenMax = max(lenMax, strlen(s));
            for (int i = 0; i < index; i++) {
                if (strcmp(a[i], s) == 0) {
                    j = i;
                    break;
                }
            }

            if (j != -1) {
                mark[j]++;
            }
            else {
                strcpy(a[index], s);
                mark[index]++;
                index++;
            }
        }
    }

    for (int i = 0; i < index; i++) {
        if (strlen(a[i]) == lenMax) {
            printf("%s %d\n", a[i], mark[i]);
        }
    }
}