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
    set<int> ans;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        while (a[i]) {
            ans.insert(a[i] % 10);
            a[i] /= 10;
        }
    }
    for (auto i:ans) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}