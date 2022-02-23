#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

// int main() {
//     int n;
//     scanf("%d", &n);
//     int a[100], index = 0;
//     while (n) {
//         a[index++] = n % 10;
//         n /= 10;      
//     }

//     if (a[0] != 0) printf("%d", a[0]);
//     for (int i = index - 2; i >= 1; i--) {
//         printf("%d", a[i]);
//     }
//     printf("%d", a[index - 1]);
// }

int main() {
    int n;
    scanf("%d", &n);
    int a[20], index = 0;
    while (n > 0) {
        a[index] = n % 10;
        n /= 10;
        index++;
    }
    
    // Swap;
    int temp = a[0];
    a[0] = a[index - 1]; 
    a[index - 1] = temp; 

    for (int i = index - 1; i >= 0; i--) {
        if (a[index - 1] == 0 && i == index - 1) 
            continue;
        else printf("%d", a[i]);
    }

}