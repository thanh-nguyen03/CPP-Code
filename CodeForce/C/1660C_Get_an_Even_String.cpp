#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

string s;
void run_test_case() {
    cin >> s;
    int cnt = 0;
    int mp[200] = {0};
    for (int i = 0; i < s.size(); i++) {
        if (mp[s[i]]) {
            cnt += 2;
            memset(mp, 0, sizeof(mp));
        }
        else mp[s[i]] = 1;
    }
    cout << s.size() - cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}