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
void run_test_case() {
    cin >> n;
    vector<pair<int, int>> a(n, {0, 0});
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(all(a));
    int curr = a[0].second;
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i].first >= curr) {
            cnt++;
            curr = a[i].second;
        }
        else curr = min(curr, a[i].second);
    }
    cout << cnt << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}