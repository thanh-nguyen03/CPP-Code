#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)

ll a, b;
void run_test_case() {
    cin >> a >> b;
    if (a >= b) {
        cout << "YES" << endl;
        return;
    }
    if (a & 1) a--;
    if (a * 3 / 2 < b) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}