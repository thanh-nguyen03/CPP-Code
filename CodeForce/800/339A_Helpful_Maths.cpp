#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    string s;
    cin >> s;
    int a[1000], index = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            a[index++] = s[i] - '0';
        }
    }

    sort(a, a + index);
    for (int i = 0; i < index - 1; i++) {
        cout << a[i] << "+";
    }
    cout << a[index - 1];
}