#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

bool checkPal(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != s[s.size() - i - 1]) return 0;
    }
    return 1;
}

void result(string s) {
    for (int i = 0; i < s.size(); i++) cout << s[i] << " ";
    cout << endl;
}

void binary(int pos, string s) {
    if (pos == 0) {
        if (checkPal(s)) result(s);
    }
    else {
        binary(pos - 1, s + "0");
        binary(pos - 1, s + "1");
    }
}

int main() {
    int n;
    cin >> n;
    binary(n, "");
}