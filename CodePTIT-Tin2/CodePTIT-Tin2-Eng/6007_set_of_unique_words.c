#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    gets(s1);
    scanf("\n");
    gets(s2);

    char a[100][100], b[100][100];
    // Tach tu s1
    char *token1 = strtok(s1, " ");
    int countOne = 0;
    while (token1 != NULL) {
        strcpy(a[countOne++], token1);

        token1 = strtok(NULL, " ");
    }

    // Tach tu s2
    char *token2 = strtok(s2, " ");
    int countTwo = 0;
    while (token2 != NULL) {
        strcpy(b[countTwo++], token2);

        token2 = strtok(NULL, " ");
    }

    char res[100][100];
    int count = 0;
    for (int i = 0; i < countOne; i++) {
        int flag = 1;
        for (int j = 0; j < countTwo; j++) {
            if (strcmp(a[i], b[j]) == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) strcpy(res[count++], a[i]);
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(res[i], res[j]) >= 0) {
                char temp[100];
                strcpy(temp, res[i]);
                strcpy(res[i], res[j]);
                strcpy(res[j], temp);
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%s ", res[i]);
        while (strcmp(res[i], res[i + 1]) == 0) i++;
    }
}