#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
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

void interchangeSortDecrease(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                swap(&a[i], &a[j]);
            }
        }
    }
}


int main() {
    int t, testCase = 1;
    scanf("%d\n", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n + 10], b[n + 10];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }

        interchangeSort(a, n);
        interchangeSortDecrease(b, n);

        printf("Test %d:\n", testCase++);
        for (int i = 0; i < n; i++) {
            printf("%d %d ", a[i], b[i]);
        }
        printf("\n");
    }
}