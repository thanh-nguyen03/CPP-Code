#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        int n;
        scanf("%d\n", &n);
        char b[100][100];
        for (int i = 0; i < n; i++) {
            scanf("%s", &b[i]);
        }
        
        // Sort
        for (int i = 0; i < n - 1; i++) {
            char x[100], y[100];
            for (int j = i + 1; j < n; j++) {
                strcpy (x, b[i]);
				strcat (x, b[j]);
				strcpy (y, b[j]);
				strcat (y, b[i]);
                if (strcmp(x, y) > 0) {
                    char temp[20];
                    strcpy(temp, b[i]);
                    strcpy(b[i], b[j]);
                    strcpy(b[j], temp);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            printf("%s", b[i]);
        }
        printf("\n");
    }
}