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
int solve(int a[], int n) {
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        int minidx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minidx]) {
                minidx = j;
            }
        }
        if (minidx != i) {
            swap(a[i], a[minidx]);
            ans++;
        }
    }
    return ans;
}
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << solve(a, n) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}