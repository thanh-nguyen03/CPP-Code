#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

bool checkVowel(char a) {
    if (a == 'a' || a == 'e' || a == 'i' || a == 'u' || a == 'o' || a == 'y') {
        return 1;
    }
    return 0;
}

int main() {
    fastread();
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
        if (checkVowel(s[i])) {
            continue;
        }
        else {
            cout << "." << s[i];
        }
    }
}