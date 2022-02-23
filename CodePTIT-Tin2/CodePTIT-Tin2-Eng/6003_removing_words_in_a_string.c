#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    char s[1000];
    gets(s);

    char a[100];
    scanf("\n%s", a);

    char *token = strtok(s, " ");

    while (token != NULL) {
        if (strcmp(token, a) != 0) printf("%s ", token);

        token = strtok(NULL, " ");
    }
}