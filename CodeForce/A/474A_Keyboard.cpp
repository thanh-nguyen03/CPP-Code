#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    char direction;
    cin >> direction;
    string s, key;
    cin >> s;
    key = "qwertyuiopasdfghjkl;zxcvbnm,./";
    // mid = "asdfghjkl;";
    // bot = "zxcvbnm,./";
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < key.length(); j++) {
            if (s[i] == key[j]) {
                if (direction == 'R') {
                    cout << key[j - 1];
                }
                else {
                    cout << key[j + 1];
                }
            }
        }
    }
}