#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

typedef struct Student {
    float ma, diem[3];
    char ten[100];
}Student;

void themMoi(Student s[], int *msv) {
    
}

int main() {
    int choice;
    int msv = 0; // Also keep track of total number of student
    Student p[1000];
    while (1) {
        scanf("%d", &choice);
        if (choice == 1) themMoi(p, &msv);
    }
}