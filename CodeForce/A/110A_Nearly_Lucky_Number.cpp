#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

bool check(int n) {
    if (n == 0) return 0;
    while (n) {
        if (n % 10 != 4 && n % 10 != 7) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main() {
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '4' || s[i] == '7') count++;
    }
    
    if (check(count)) cout << "YES";
    else cout << "NO";
}