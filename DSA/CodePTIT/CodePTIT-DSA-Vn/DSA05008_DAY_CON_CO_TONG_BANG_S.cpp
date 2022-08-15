#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <cstring>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define all(x) x.begin(), x.end()
#define tester() int t; cin >> t; while(t--)

int n, a[10000], s;
void run_test_case() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> a[i];
    int dp[s + 5] = {};
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = s; j >= a[i]; j--) {
            if (!dp[j] && dp[j - a[i]]) 
                dp[j] = 1;
        }
    }
    cout << (dp[s] ? "YES" : "NO") << endl;
}

int main() {
    tester() run_test_case();
}