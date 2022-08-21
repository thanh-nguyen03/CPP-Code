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

int n, x, a[MAX];

int bSearch(int a[], int x, int l, int r) {
    if (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) return 1;
        else if (a[mid] < x) return bSearch(a, x, mid + 1, r);
        else return bSearch(a, x, l, mid - 1);
    }
    return -1;
}

void run_test_case() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << bSearch(a, x, 0, n - 1) << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}