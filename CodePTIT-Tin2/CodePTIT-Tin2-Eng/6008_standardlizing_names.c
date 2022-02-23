#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("\n");
        char s[1000];
        gets(s);

        char b[100][100];
        int index = 0;

        for (int i = 0; i < strlen(s); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 'a' - 'A';
            }
        }

        char *token = strtok(s, " ");
        while (token != NULL) {
            strcpy(b[index++], token); 

            token = strtok(NULL, " ");
        }

        for (int i = 0; i < index; i++) {
            b[i][0] -= 'a' - 'A';
            printf("%s ", b[i]);
        }
        printf("\n");
    }
}