#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;
typedef double db;

int main() {
    int n = 5;
    int a[n + 1][n + 1], row = 0, col = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }
    cout << abs(3 - row) + abs(3 - col);
}