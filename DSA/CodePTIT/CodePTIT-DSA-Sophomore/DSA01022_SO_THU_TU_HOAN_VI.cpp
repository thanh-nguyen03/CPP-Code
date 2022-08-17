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

int n;
vi a, b;
void run_test_case() {
    cin >> n;
    a.resize(n, 0);
    b.clear();
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b.pb(i+1);
    }
    int cnt = 0;
    do {
        cnt++;
        if (a == b) {
            cout << cnt << endl;
            return;
        }
    }
    while (next_permutation(all(b)));
}

int main() {
    faster();
    tester() 
        run_test_case();
}