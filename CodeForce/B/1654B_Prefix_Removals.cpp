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
void run_test_case() {
    cin >> s;
    int m[200] = {0};
    for (int i = 0; i < s.size(); i++) {
        m[s[i]]++;
    }
    int idx = 0;
    while (m[s[idx]] >= 2) {
        m[s[idx]]--;
        idx++;
    }
    for (int i = idx; i < s.size(); i++) cout << s[i];
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}