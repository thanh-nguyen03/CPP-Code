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

ll n, a[10000];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] *= a[i];
    }
    sort(a, a + n);
    int i = 0, j = n - 2, k = n - 1;
    while (k >= 2) {
        if (a[i] + a[j] == a[k]) {
            cout << "YES\n";
            return;
        }
        else if (a[i] + a[j] < a[k]) {
            i++;
        }
        else j--;
        
        if (i == j) {
            k--;
            j = k - 1;
            i = 0;
        }
    }
    cout << "NO\n";
}

int main() {
    faster();
    tester() 
        run_test_case();
}