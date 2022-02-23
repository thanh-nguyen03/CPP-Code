#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;
typedef struct Student {
    float ma, diem[3], tong;
    char ten[1000], birth[1000];
}Student;

void swap(Student *a, Student *b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}

void sort(Student s[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i].tong < s[j].tong) {
                swap(&s[i], &s[j]);
            }
            else if (s[i].tong == s[j].tong) {
                if (s[i].ma > s[j].ma) {
                    swap(&s[i], &s[j]);
                }
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Student studentList[n];
    for (int i = 0; i < n; i++) {
        studentList[i].ma = i + 1;
        scanf("\n");
        gets(studentList[i].ten);
        scanf("\n");
        gets(studentList[i].birth);
        scanf("%f %f %f", &studentList[i].diem[1], &studentList[i].diem[2], &studentList[i].diem[3]);

        studentList[i].tong = studentList[i].diem[1] + studentList[i].diem[2] + studentList[i].diem[3];
    }

    sort(studentList, n);

    for (int i = 0; i < n; i++) {
        printf("%.0f %s %s %.1f\n", studentList[i].ma, studentList[i].ten, studentList[i].birth, studentList[i].tong);
    }
}