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

int n, k;
vi a;
void run_test_case() {
    cin >> n >> k;
    a.resize(k + 1);
    map<int, int> mp;
    for (int i = 1; i <= k; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }

    int i = k;
    while (a[i] == n - k + i) i--;
    if (i > 0) a[i]++;
    else {
        cout << k << endl;
        return;
    }
    int cnt = 0;
    for (int j = 1; j <= k - i; j++) {
        a[i + j] = a[i] + j;
    }
    for (int i = 1; i <= k; i++) {
        if (mp[a[i]] == 0) cnt++;
    }
    cout << cnt << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}