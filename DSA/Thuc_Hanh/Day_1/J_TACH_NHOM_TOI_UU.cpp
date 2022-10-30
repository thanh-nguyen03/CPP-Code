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

int n, k, a[MAX];
void run_test_case() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1] + k) {
            cnt++;
        } 
    }
    cout << cnt << endl;
}

int main() {
    faster();
        run_test_case();
}

// 1 2 3 4 6 7 9