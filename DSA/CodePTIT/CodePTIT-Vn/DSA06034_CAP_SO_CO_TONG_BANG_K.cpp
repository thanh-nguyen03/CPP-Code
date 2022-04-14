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
#define tester() int t; cin >> t; while(t--)

int n, k, a;
void run_test_case() {
    cin >> n >> k;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
        cin >> a;
        mp[a]++;
    }
    ll cnt = 0;
    for (auto i : mp) {
        if (i.first * 2 == k) {
            cnt += i.second * (i.second - 1);
        }
        else {
            cnt += i.second * mp[k - i.first];
        }
    }
    cout << cnt / 2 << endl;
}

int main() {
    tester() run_test_case();    
}