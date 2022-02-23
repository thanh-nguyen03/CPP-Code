#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    char s[1000], b[100][100];
    gets(s);
    int index = 0;
    char *token = strtok(s, " ");
    while (token != NULL) {
        strcpy(b[index++], token);
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < index - 1; i++) {
        for (int j = i + 1; j < index; j++) {
            if (strcmp(b[i], b[j]) == 0) {
                strcpy(b[j], "1");
            }
        }
    }

    for (int i = 0; i < index; i++) {
        if (strcmp(b[i], "1") != 0) {
            printf("%s ", b[i]);
        }
    }
}