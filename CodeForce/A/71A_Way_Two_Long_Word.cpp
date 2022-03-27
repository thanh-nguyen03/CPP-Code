#include <iostream>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.length() > 10) {
            cout << s[0] << s.length() - 2 << s[s.length() - 1];
        }
        else cout << s;
        cout << endl;
    }
}