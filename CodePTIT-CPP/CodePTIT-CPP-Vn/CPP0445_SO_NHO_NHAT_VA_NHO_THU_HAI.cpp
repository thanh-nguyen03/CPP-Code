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

int n, a[10000000];
void run_test_case() {
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    if (s.size() == 1) {
        cout << -1 << endl;
        return;
    }
    sort(a, a + n);
    cout << a[0] << " " << a[1] << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}