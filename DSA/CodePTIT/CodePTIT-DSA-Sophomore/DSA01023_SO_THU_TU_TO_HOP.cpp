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

int n, k, cnt;
vi a, b;
void init() {
    cin >> n >> k;
    a.resize(k + 1, 0);
    b.resize(k + 1, 0);
    for (int i = 1; i <= k; i++) cin >> b[i];
    cnt = 0;
    for (int i = 1; i <= k; i++) a[i] = i;
}

void backtrack(int i) {
    for (int j = a[i-1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) {
            cnt++;
            if (a == b) {
                cout << cnt << endl;
                return;
            }
        }
        else backtrack(i + 1);
    }
}

void run_test_case() {
    init();
    backtrack(1);
}

int main() {
    faster();
    tester() 
        run_test_case();
}