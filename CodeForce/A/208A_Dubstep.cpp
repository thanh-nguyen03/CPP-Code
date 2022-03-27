#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] == 'W') {
            if (s[i + 1] == 'U' && s[i + 2] == 'B') {
                s[i] = ' ';
                s[i+1] = ' ';
                s[i+2] = ' ';
            }
        }
    }
    int start = 0;
    while (s[start] == ' ') start++;
    for (int i = start; i < len; i++) {
        if (s[i] != ' ') cout << s[i];
        if (s[i] == ' ' && s[i + 1] != ' ') cout << s[i];
    }
}