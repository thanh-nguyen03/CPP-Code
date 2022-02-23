#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

void swap(ll* a, ll* b) { 
    ll t = *a; 
    *a = *b; 
    *b = t; 
} 
  
void QuickSort(ll a[], int l, int r)
{
    int i = l;
    int j = r;
    ll p = a[(l + r) / 2];
    while (i < j) {
        while (a[i] < p) i++;
        while (a[j] > p) j--;
        if (i <= j) {
            swap(&a[i], &a[j]);
            i++;
            j--;
        }
    }
    if (i < r) QuickSort(a, i, r);
    if (j > l) QuickSort(a, l, j);
}


int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        ll a[n + 10];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
            a[i] *= a[i];
        }

        QuickSort(a, 0, n - 1);

        int x = 0, y = n - 2, z = n - 1, flag = 0;
        while(1) {
            if (a[x] + a[y] == a[z]) {
                flag = 1;
                break;
            } 
            else if (a[x] + a[y] < a[z]) x++;
            else if (a[x] + a[y] > a[z]) y--;

            if (x == y) {
                z--;
                x = 0;
                y = z - 1;
            }

            if (z == 1) break;
        }

        if (flag) printf("YES\n");
        else printf("NO\n");
    }
}