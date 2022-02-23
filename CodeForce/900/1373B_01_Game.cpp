#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int min(int a, int b) {
    if (a < b) return a;
    return b;
}

void solve() {
    string s;
    cin >> s;
    int count0 = 0, count1 = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') count0++;
        else count1++;
    }
    int cnt = min(count0, count1);
    if (cnt % 2 != 0) {
        cout << "DA" << endl;
    }
    else cout << "NET" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}