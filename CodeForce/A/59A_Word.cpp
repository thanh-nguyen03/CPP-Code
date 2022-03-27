#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    string s;
    cin >> s;
    int len = s.length(), up = 0, low = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') up++;
        if (s[i] >= 'a' && s[i] <= 'z') low++;
    }
    if (up > low) {
        for (int i = 0; i < len; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 'a' - 'A';
        }
    }
    else if (up <= low) {
        for (int i = 0; i < len; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 'a' - 'A';
        }
    }
    cout << s;
}