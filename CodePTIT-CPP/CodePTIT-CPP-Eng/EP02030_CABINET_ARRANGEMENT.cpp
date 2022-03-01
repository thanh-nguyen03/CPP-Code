#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

int a[100][100], n;

void output() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void solve() {
    int tmp;
    a[0][n - 1] = 1;
    for (int i = 0; i < n; i++) {
        if (i > 0) a[i][n - 1] = a[i - 1][n - 1] + i + 1;
        tmp = i;
        for (int j = n - 2; j >= 0; j--) {
            if (i <= j) {
                a[i][j] = a[i][j + 1] + tmp + 1;
                tmp++;
            }
            else {
                tmp--;
                a[i][j] = a[i][j + 1] + tmp + 1;
            }
        }
    }
}

int main() {
    cin >> n;
    solve();
    output();
}