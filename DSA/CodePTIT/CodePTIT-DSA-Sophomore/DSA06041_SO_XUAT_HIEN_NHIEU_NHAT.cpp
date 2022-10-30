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
    map<int, int> mp;
    int ma = 0, maIdx = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        if (mp[a[i]] > ma) {
            ma = mp[a[i]];
            maIdx = i;
        }
    }
    if (ma > n / 2) {
        cout << a[maIdx] << endl;
    } 
    else {
        cout << "NO" << endl;
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}