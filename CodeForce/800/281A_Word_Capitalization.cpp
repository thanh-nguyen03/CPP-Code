#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    string s;
    cin >> s;
    if (s[0] >= 'a' && s[0] <= 'z') s[0] -= 'a' - 'A';
    cout << s;
}