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

int n, a[MAX];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vi odd, even;
    for (int i = 0; i < n; i += 2) odd.pb(a[i]); 
    for (int i = 1; i < n; i += 2) even.pb(a[i]);
    sort(all(odd));
    sort(all(even), greater<int>());
    for (int i = 0; i < n / 2; i++) {
        cout << odd[i] << " " << even[i] << " ";
    }
    if (n & 1) cout << odd[n/2] << endl;
}

int main() {
    faster();
        run_test_case();
}