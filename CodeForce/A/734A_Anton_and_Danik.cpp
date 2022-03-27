#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, d = 0, len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] == 'A') a++;
        else d++;
    }
    if (d == a) cout << "Friendship";
    else if (d > a) cout << "Danik";
    else cout << "Anton";
}