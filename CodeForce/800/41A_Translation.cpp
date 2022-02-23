#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    string s, t;
    cin >> s >> t;
    int len = s.length();
    bool flag = true;
    for (int i = 0; i < len; i++) {
        if (s[i] != t[len - i - 1]) {
            flag = false;
            break;
        }
    }
    if (flag) cout << "YES";
    else cout << "NO";
}