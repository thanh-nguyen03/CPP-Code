#include <stdio.h>

int gcm(int a, int b) {
    if (b == 0) return a;
    
    return gcm(b, a % b);
}

int main() {
    int a, b; 
    scanf("%d%d", &a, &b);

    for (int i = a; i < b; i++) {
        for (int j = i + 1; j <= b; j++) {
            if (gcm(i, j) == 1) printf("(%d,%d)\n", i, j);
        }
    }
}