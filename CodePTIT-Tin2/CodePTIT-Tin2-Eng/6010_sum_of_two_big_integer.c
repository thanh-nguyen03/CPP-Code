#include <stdio.h>
#include <string.h>

int main() {
    int t; scanf("%d\n", &t);
    while (t--) {
        char a[1000], b[1000], a0[1000] = "", b0[1000] = "";
        gets(a);
        scanf("\n");
        gets(b);

        // Đảo ngược chuỗi
        for (int i = strlen(a)-1; i >= 0; i--) {
			a0[strlen(a)-1-i] = a[i];
		}
		for (int i = strlen(b)-1; i >= 0; i--) {
			b0[strlen(b)-1-i] = b[i];
		}

        if (strlen(a0) >= strlen(b0)) {
            strcat(a0, "0");
            while(strlen(b0) < strlen(a0)) strcat(b0, "0");
        }
        else {
            strcat(b0, "0");
            while(strlen(a0) < strlen(b0)) strcat(a0, "0");
        }

        // Tính toán
        int s[10000] = {0}, remainder = 0;
        for (int i = 0; i < strlen(a0); i++) {
            int x = (a0[i] - '0') + (b0[i] - '0') + remainder;
            remainder = x / 10;
            s[i] = x % 10;
        }
        for (int i = strlen(a0) - 1; i >= 0; i--) {
            if (i == strlen(a0) - 1 && s[i] == 0) continue;
            printf("%d", s[i]);
        }

        printf("\n");
    }
}