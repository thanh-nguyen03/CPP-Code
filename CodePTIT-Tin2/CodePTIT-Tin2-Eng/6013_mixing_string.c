#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        int n;
        scanf("%d", &n);
        if (n == 0) break;
        char s1[1000], s2[1000], s[1000], s12[10000] = {}, stemp[10000] = {};

        scanf(" ");
		gets(s1);
		scanf(" ");
		gets(s2);
		scanf(" ");
		gets(s);

        int index = 0;
        for (int i = 0; i < n; i++) {
            s12[index++] = s2[i];
            s12[index++] = s1[i];
        }

        strcpy(stemp, s1);
        strcat(stemp, s2);

        int count = 1;
        int check = 0;
        while (strcmp(stemp, s12) != 0) {
            // CHia doi
            for (int i = 0 ; i < n; i++) {
                s1[i] = s12[i];
                s2[i] = s12[n + i];
            }

            // Ghep xau
            index = 0;
            for (int i = 0; i < n; i++) {
                s12[index++] = s2[i];
                s12[index++] = s1[i];
            }

            count++;
            if (strcmp(s12, s) == 0) {
                check = 1;
                break;
            }
        }

        if (check == 1) printf ("%d\n", count);
		else printf ("-1\n");
    }
}