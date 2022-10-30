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

int n, m, k;
vi a;
void run_test_case() {
    cin >> n >> m >> k;
    a.clear();
    int tmp;
    for (int i = 0; i < n + m; i++) {
        cin >> tmp;
        a.pb(tmp);
    }
    sort(all(a));
    cout << a[k - 1] << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}