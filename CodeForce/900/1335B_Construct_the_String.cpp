#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    char c[26];
    for (int i = 0; i < 26; i++) {
        c[i] = 'a' + i;
    }
    string s;
    for (int i = 0; i < b; i++) {
        s[i] = c[i];
    }
    int k = 0;
    while (n--) {
        cout << s[k];
        k++;
        if (k == b) k = 0;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--)
        solve();
}