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
    
    int sum = 0, maxx = INT_MIN;
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }
    maxx = sum;
    int le = 0;
    for (int i = 1; i < n - k + 1; i++) {
        sum -= a[i-1];
        sum += a[i + k - 1];
        if (sum > maxx) {
            maxx = sum;
            le = i;
        }
    }
    for (int i = le; i < le + k; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}