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

string s;
char c;
void run_test_case() {
    cin >> s >> c;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            if ((i + 1) % 2 == 0) {
                continue;
            }
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}