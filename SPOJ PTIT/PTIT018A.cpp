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

int f[1000000] = {};
void sangnguyento() {
    f[0] = 1, f[1] = 1;
    for (int i = 2; i <= 1000; i++) {
        if (f[i] == 0) {
            for (int j = i*i; j <= 1000000; j += i) {
                f[j] = 1;
            }
        }
    }
}

int l, r;
void run_test_case() {
    cin >> l >> r;
    ll cnt = 0;
    for (int i = l; i <= r - 6; i++) {
        if (f[i] == 0 && f[i + 6] == 0) cnt++;
    }
    cout << cnt << endl;
}

int main() {
    sangnguyento();
    faster();
    tester() 
        run_test_case();
}