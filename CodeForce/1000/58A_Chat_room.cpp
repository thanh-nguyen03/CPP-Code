#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    string s;
    cin >> s;
    string ans = "hello";
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ans[j]) {
            j++;
        }
    }
    if (j == 5) cout << "YES";
    else cout << "NO";
}