#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n;
void run_test_case() {
    cin >> n;
    int total = 0, temp = n;
    for (int i = 2; i <= temp / 2; i++) {
        int k = 0;
        while (n % i == 0) {
            k++;
            n /= i;
        }
        if (k > 1) {
            cout << 0 << endl;
            return;
        }
        else if (k == 1) {
            total++;
        }
    }
    if (total == 3) {
        cout << 1 << endl;
        return;
    }
    else cout << 0 << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}