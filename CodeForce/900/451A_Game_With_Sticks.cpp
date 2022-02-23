#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

void switchPlayer(int *a) {
    if (*a == 1) *a = 0;
    else *a = 1;
}

int main() {
    int n, m;
    cin >> n >> m;
    int curr = 0;
    while (n > 0 && m > 0) {
        n--;
        m--;
        switchPlayer(&curr);
    }
    if (curr == 1) cout << "Akshat";
    else cout << "Malvika";
}