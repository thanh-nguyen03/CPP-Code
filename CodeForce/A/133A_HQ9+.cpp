#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    string s;
    getline(cin, s);
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] == 'H' || s[i] == '9' || s[i] == 'Q') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}