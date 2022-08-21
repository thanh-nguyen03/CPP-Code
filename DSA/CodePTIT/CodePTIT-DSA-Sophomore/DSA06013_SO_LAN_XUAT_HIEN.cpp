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

int n, x, a[MAX];
void run_test_case() {
    cin >> n >> x;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    if (mp[x]) {
        cout << mp[x] << endl;
    }
    else {
        cout << -1 << endl;
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}