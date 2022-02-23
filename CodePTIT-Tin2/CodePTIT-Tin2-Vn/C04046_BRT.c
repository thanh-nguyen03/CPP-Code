#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int min(int a, int b) {
    if (a < b) return a;
    return b;
}

void swap(int* a, int* b) { 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
void interchangeSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(&a[i], &a[j]);
            }
        }
    }
}

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n], m = 999999999, count = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        interchangeSort(a, n);

        for (int i = 0; i < n - 1; i++) {
            m = min(m, abs(a[i] - a[i + 1]));
        }

        for (int i = 0; i < n - 1; i++) {
            if (abs(a[i] - a[i+1]) == m) count++; 
        }

        printf("%d %d\n", m, count);
    }
}