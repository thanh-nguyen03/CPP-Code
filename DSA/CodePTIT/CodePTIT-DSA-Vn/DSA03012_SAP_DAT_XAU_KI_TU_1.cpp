#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

string s;
void run_test_case() {
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    int m = 0;
    for (auto p : mp) {
        p.second > m ? m = p.second : m;
    }
    if (m > (s.size() + 1) / 2) cout << -1 << endl;
    else cout << 1 << endl;
}   

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}