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
int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
void run_test_case() {
    cin >> n;
    int ans = 0;
    for (int i = 9; i >= 0; i--) {
        while (n >= a[i]) {
            n -= a[i];
            ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}