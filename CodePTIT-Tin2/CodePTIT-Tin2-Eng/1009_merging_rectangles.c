#include <stdio.h>

int main() {
    int a[100], b[200] = {0};
    int max = -1, flag = 0;
    for (int i = 0; i < 6; i++) {
        scanf("%d", &a[i]);
        b[a[i]]++;
        if (a[i] > max) max = a[i];
        if (b[a[i]] >= 3) flag = 1;
        if (a[i] != max && b[a[i]] >= 2) flag = 1;
    }

    int s = a[0]*a[1] + a[2]*a[3] + a[4]*a[5];
    if (max * max == s && flag == 1) printf("YES");
    else printf("NO");
}