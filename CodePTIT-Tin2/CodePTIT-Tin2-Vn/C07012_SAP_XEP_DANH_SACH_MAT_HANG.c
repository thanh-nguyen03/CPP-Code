#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;
typedef struct Item {
    char ten[1000], nhom[1000];
    float ma, gia_mua, gia_ban, loi_nhuan;
}Item;

// Sort theo int giam dan
void swap(Item *a, Item *b) {
    Item t = *a;
    *a = *b;
    *b = t;
}
void sort(Item a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].loi_nhuan < a[j].loi_nhuan) {
                swap(&a[i], &a[j]);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Item itemList[n];
    for (int i = 0; i < n; i++) {
        itemList[i].ma = i + 1;
        scanf("\n");
        gets(itemList[i].ten);
        scanf("\n");
        gets(itemList[i].nhom);
        scanf("%f %f", &itemList[i].gia_mua, &itemList[i].gia_ban);
        itemList[i].loi_nhuan = itemList[i].gia_ban - itemList[i].gia_mua;
    }

    sort(itemList, n);
    
    for (int i = 0; i < n; i++) {
        printf("%.0f %s %s %.2f\n", itemList[i].ma, itemList[i].ten, itemList[i].nhom, itemList[i].loi_nhuan);
    }
}