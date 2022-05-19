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

void run_test_case(int n) {
    ll ans = 1;
    for (int i = 2; i <= n; i++) ans *= i;
    cout << ans << endl;
}

int main() {
    int n;
    cin >> n;
    while (n != 0) {
        run_test_case(n);
        cin >> n;
    }
}
