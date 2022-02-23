#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));


int n, a[10000000];
void sangNguyenTo() {
    a[0] = 1; a[1] = 1;
    for (int i = 2; i <= 1000; i++) {
        if (a[i] == 0) {
            for (int j = i * i; j <= 1000000; j += i) {
                a[j] = 1;
            }
        }
    }
}
void run_test_case() {
    cin >> n;
    if (n % 2 != 0) {
        if (a[n - 2] == 0) {
            cout << 2 << " " << n - 2 << endl;
            return;
        }
        else {
            cout << "-1" << endl;
            return;
        }
    }
    else {
        for (int i = 2; i <= n / 2; i++) {
            if (a[i] == 0 && a[n - i] == 0) {
                cout << i << " " << n - i << endl;
                return;
            }
        }
    }
}

int main() {
    fastread();
    sangNguyenTo();
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}
