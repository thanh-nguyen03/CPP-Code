#include <iostream>
using namespace std;

typedef long long ll;
typedef double db;

int main() {
    int n;
    cin >> n;
    int a[n][3], res = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) count++;
        }
        if (count >= 2) res++;
    }
    cout << res;
}