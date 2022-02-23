#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    gets(s);

    char b[100][100];
    int j = 0;
    char *token = strtok(s, " ");
    
    while (token != NULL) {
        strcpy(b[j++], token);

        token = strtok(NULL, " ");
    }

    for (int i = 0; i < j; i++) {
        for (int k = i + 1; k < j; k++) {
            if (strcmp(b[i], b[k]) == 0) {
                strcpy(b[k], "1");
            }
        }

        if (strcmp(b[i], "1") != 0) printf("%s ", b[i]);
    }

}