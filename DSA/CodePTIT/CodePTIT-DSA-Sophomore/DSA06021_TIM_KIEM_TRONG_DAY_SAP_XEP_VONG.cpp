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

int bSearch(int a[], int l, int r, int x) {
    if (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) return mid;
        else if (a[mid] > x) return bSearch(a, l, mid - 1, x);
        else return bSearch(a, mid + 1, r, x);
    }
    return -1;
}

int n, a[MAX], x;
void run_test_case() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int idx;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            idx = i + 1;
            break;
        }
    }
    if (x > a[idx]) {
        cout << bSearch(a, idx, n, x) + 1 << endl;
    }
    else cout << bSearch(a, 0, idx, x) + 1 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}