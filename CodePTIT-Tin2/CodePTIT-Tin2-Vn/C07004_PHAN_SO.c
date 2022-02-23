#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;
typedef struct PhanSo {
    int tu;
    int mau;
} PhanSo;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void rutGon(int *tu, int *mau) {
    int g = gcd(*tu, *mau);
    *tu /= g;
    *mau /= g;
}

void quyDong(int *a, int *b, int *c, int *d) {
    int mau = *b * *d / gcd(*b, *d);
    *a *= mau / *b;
    *c *= mau / *d;

    *b = mau;
    *d = mau;
}

void tongPhanSo(int a, int b, int c, int d, int *tu, int *mau) {
    *tu = a + c;
    *mau = b;
}

void thuongPhanSo(int a, int b, int *tu, int *mau) {
    *tu = a;
    *mau = b;
}

int main() {
    int t;
    int testcase = 1;
    scanf("%d\n", &t);
    while (t--) {
        printf("Case #%d:\n", testcase);
        PhanSo ps1, ps2;
        scanf("%d%d%d%d", &ps1.tu, &ps1.mau, &ps2.tu, &ps2.mau);
        // Rut Gon
        rutGon(&ps1.tu, &ps1.mau);
        rutGon(&ps2.tu, &ps2.mau);

        // Quy Dong
        quyDong(&ps1.tu, &ps1.mau, &ps2.tu, &ps2.mau);
        printf("%d/%d %d/%d\n", ps1.tu, ps1.mau, ps2.tu, ps2.mau);

        // Tong
        PhanSo tong;
        tongPhanSo(ps1.tu, ps1.mau, ps2.tu, ps2.mau, &tong.tu, &tong.mau);
        rutGon(&tong.tu, &tong.mau);
        printf("%d/%d\n", tong.tu, tong.mau);

        // Thuong (ps1.tu / ps2.tu sau khi da quy dong)
        PhanSo thuong;
        thuongPhanSo(ps1.tu, ps2.tu, &thuong.tu, &thuong.mau);
        rutGon(&thuong.tu, &thuong.mau);
        printf("%d/%d\n", thuong.tu, thuong.mau);
        testcase++;
    }  
}