#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;


int hash(int a, int n) {
    return abs(a % (n*100));
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        int map[10000] = {0};
        int index[10000] = {0};
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            int h = hash(a[i], n);
            index[h] = i;
            map[h]++;
        }


        for (int i = 0; i < n - 1; i++) {
            int ii = map[hash(a[i], n)];
            for (int j = i + 1; j < n; j++) {
                int jj = map[hash(a[j], n)];
                if (ii < jj) {
                    swap(&a[i], &a[j]);
                }
                else if (ii == jj) {
                    if (index[hash(a[i], n)] > index[hash(a[j], n)] && a[i] != a[j]) {
                        swap(&a[i], &a[j]);
                    }
                }
            }
            for (int j = 0; j < n; j++) {
                printf("%d ", a[j]);
            }
            printf("\n");
        }

        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}