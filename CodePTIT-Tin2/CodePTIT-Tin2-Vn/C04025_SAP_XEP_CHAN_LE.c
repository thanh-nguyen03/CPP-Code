#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(&a[i], &a[j]);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n], odd[n], even[n], odd_i = 0, even_i = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 != 0) odd[odd_i++] = a[i];
        else even[even_i++] = a[i];
    }

    sort(odd, odd_i);
    sort(even, even_i);

    for (int i = 0; i < even_i; i++) {
        printf("%d ", even[i]);
    }
    for (int i = 0; i < odd_i; i++) {
        printf("%d ", odd[i]);
    }
}