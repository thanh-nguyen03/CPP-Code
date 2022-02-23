#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;
typedef struct Student {
    float ma, diem[3], tong;
    char ten[100], birth[100];
}Student;

int main() {
    int n;
    scanf("%d", &n);
    Student list[n];

    float max = 0;
    for (int i = 0; i < n; i++) {
        list[i].ma = i + 1;
        scanf("\n");
        gets(list[i].ten);
        scanf("\n");
        gets(list[i].birth);
        scanf("%f %f %f", &list[i].diem[1], &list[i].diem[2], &list[i].diem[3]);

        list[i].tong = list[i].diem[1] + list[i].diem[2] + list[i].diem[3];
        if (list[i].tong > max) max = list[i].tong;
    }

    for (int i = 0; i < n; i++) {
        if (list[i].tong == max) {
            printf("%.0f %s %s %.1f\n", list[i].ma, list[i].ten, list[i].birth, list[i].tong);

        }
    }
}