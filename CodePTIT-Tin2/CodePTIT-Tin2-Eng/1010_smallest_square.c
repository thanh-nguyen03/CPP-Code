#include <stdio.h>

int main() {
    int a[10];
    int maxX = -1, maxY = -1;
    int minX = 200, minY = 200;
    for (int i = 0; i < 8; i++) {
        scanf("%d", &a[i]);
        if (i % 2 == 0 && a[i] > maxX) maxX = a[i];
        if (i % 2 != 0 && a[i] > maxY) maxY = a[i];

        if (i % 2 == 0 && a[i] < minX) minX = a[i];
        if (i % 2 != 0 && a[i] < minY) minY = a[i];
    }
    maxX -= minX; maxY -= minY;
    int max = maxX > maxY ? maxX : maxY;
    printf("%d", max*max);
}