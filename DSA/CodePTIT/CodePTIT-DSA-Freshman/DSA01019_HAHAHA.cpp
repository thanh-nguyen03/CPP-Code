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
vector<char> x;
int n;

void backtrack(int pos, string s) {
    if (pos == 0) cout << s + "A" << endl;
    else {
        backtrack(pos - 1, s + "A");
        if (s[s.size() - 1] == 'A') {
            backtrack(pos - 1, s + "H");
        }
    }
}

void run_test_case() {
    cin >> n;
    backtrack(n - 2, "H");
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}