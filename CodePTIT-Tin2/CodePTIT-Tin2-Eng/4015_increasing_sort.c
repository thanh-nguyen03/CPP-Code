// #include <stdio.h>
// #include <math.h>
// #include <string.h>

// typedef long long ll;

// void swap(int* a, int* b) { 
//     int t = *a; 
//     *a = *b; 
//     *b = t; 
// } 
  
// void QuickSort(int a[], int l, int r)
// {
//     int i = l;
//     int j = r;
//     int p = a[(l + r) / 2];
//     while (i < j) {
//         while (a[i] < p) i++;
//         while (a[j] > p) j--;
//         if (i <= j) {
//             swap(&a[i], &a[j]);
//             i++;
//             j--;
//         }
//     }
//     if (i < r) QuickSort(a, i, r);
//     if (j > l) QuickSort(a, l, j);
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     int a[n + 10];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     QuickSort(a, 0, n - 1);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }
// }

#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
    int n;
    scanf("%d", &n);
    int a[n + 10];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

/*
    8

    1 3 8 2 9 7 6 5
    1 2 8 3 9 7 6 5
    1 2 3 8 9 7 6 5
    1 2 3 7 8 9 6 5
    1 2 3 6 8 9 7 5
    1 2 3 5 6 7 8 9
*/
