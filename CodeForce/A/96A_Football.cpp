#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

bool solve(string s) {
    int len = s.length();
    if (len < 7) return false;
    for (int i = 0; i < len; i++) {
        bool flag = true;
        for (int j = i + 1; j <= i + 6; j++) {
            if (s[i] != s[j]) {
                flag = false;
            }
        }
        if (flag) return true;
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    if (solve(s)) cout << "YES";
    else cout << "NO";
}