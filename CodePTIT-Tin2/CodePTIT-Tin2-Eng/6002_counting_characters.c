#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    gets(s);

    int l = 0, d = 0, e = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') l++;
        else if (s[i] >= 'a' && s[i] <= 'z') l++;
        else if (s[i] >= '0' && s[i] <= '9') d++;
        else e++; 
    }

    printf("%d %d %d", l, d, e);
}