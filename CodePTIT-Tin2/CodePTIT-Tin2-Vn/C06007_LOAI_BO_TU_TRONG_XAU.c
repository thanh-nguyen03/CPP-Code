#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    char s[10000];
    gets(s);
    char *token = strtok(s, " ");
    scanf("\n");
    char a[100];
    gets(a);
    while (token != NULL) {
        if (strcmp(token, a) != 0) {
            printf("%s ", token);
        }
        token = strtok(NULL, " ");
    }
}