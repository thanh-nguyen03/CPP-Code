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

int n, s, m;
void run_test_case() {
    cin >> n >> s >> m;
    int total = s * m;
    if (n * 6 < m * 7 || n < m) {
        cout << "-1\n";
        return;
    }
    if (total % n == 0) cout << total / n << endl;
    else cout << (total / n) + 1 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}