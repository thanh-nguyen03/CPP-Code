#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    string s;
    cin >> s;
    int mark[500] = {0}, count = 0;
    for (int i = 0; i < s.length(); i++) {
        mark[s[i] - 'a']++;
        if(mark[s[i] - 'a'] == 1) count++;
    }
    if (count % 2 != 0) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
}