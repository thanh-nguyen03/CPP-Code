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

int m, n, a[100][100];
void run_test_case() {
    int row[100] = {}, col[100] = {};
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] == 0 && col[j] == 0) {
                cnt++;
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    if (cnt % 2 != 0) {
        cout << "Ashish" << endl;
    }
    else cout << "Vivek" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}