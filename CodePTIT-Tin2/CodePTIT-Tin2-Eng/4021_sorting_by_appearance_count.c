#include <stdio.h>

void swap(int* a, int* b) { 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
void QuickSort(int a[], int e[], int l, int r)
{
    int i = l;
    int j = r;
    int p = a[(l + r) / 2];
    while (i < j) {
        while (a[i] < p) i++;
        while (a[j] > p) j--;
        if (i <= j) {
            swap(&a[i], &a[j]);
            swap(&e[i], &e[j]);
            i++;
            j--;
        }
    }
    if (i < r) QuickSort(a, e, i, r);
    if (j > l) QuickSort(a, e, l, j);
}

void QuickSort2(int b[], int c[], int d[], int l, int r) {
    int i = l;
    int j = r;
    int p = c[(l + r) / 2];
    int h = d[(l + r) / 2];
    while (i < j) {
        while (c[i] < p) i++;
        while (c[j] > p) j--;
        if (i <= j) {
            swap(&b[i], &b[j]);
            swap(&c[i], &c[j]);
            swap(&d[i], &d[j]);
            i++;
            j--;
        }
    }
    if (i < r) QuickSort2(b, c, d, i, r);
    if (j > l) QuickSort2(b, c, d, l, j);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n], c[100000] = {0}, b[n], d[100000] = {0}, e[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            e[i] = i;
        }

        QuickSort(a, e, 0, n - 1);

        int index = 0, count = 0;
        for (int i = 0; i < n; i++) {
            count++;
            if (a[i] != a[i+1]) {
                b[index] = a[i];
                c[index] = count;
                d[index] = e[i];
                index++;
                count = 0;
            }
        }

        QuickSort2(b, c, d, 0, index - 1);

        for (int i = index; i >= 0; i--) {
            for (int j = 0; j < c[i]; j++) {
                printf("%d ", b[i]);
            }
        }
    }
}
