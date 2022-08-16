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

int n;
void output(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') cout << 'A';
        else cout << 'B';
    }
    cout << " ";
}

void backtrack(int pos, string s) {
    if (pos == 0) output(s);
    else {
        backtrack(pos - 1, s + "0");
        backtrack(pos - 1, s + "1");
    }
}


void run_test_case() {
    cin >> n;
    backtrack(n, "");
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}