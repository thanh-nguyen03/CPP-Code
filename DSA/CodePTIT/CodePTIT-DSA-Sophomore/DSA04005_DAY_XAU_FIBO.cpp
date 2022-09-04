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
#define MAX 1000000

ll fib[93] = {};
void fibo() {
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 93; i++) fib[i] = fib[i-1] + fib[i-2];
}

ll n, k;
void solve() {
    if (n == 1) cout << "A" << endl;
    else if (n == 2) cout << "B" << endl;
    else {
        if (k > fib[n-2]) {
            k -= fib[n-2];
            n--;
        }
        else n -= 2;
        solve();
    }
}
void run_test_case() {
    cin >> n >> k;
    solve();
}

int main() {
    fibo();
    faster();
    tester() 
        run_test_case();
}
// 1 1 2  3   5     8
// A B AB BAB ABBAB BABABBAB ABBABBABABBAB