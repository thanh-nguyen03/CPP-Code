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

ll n, a[MAX], b[MAX];
void run_test_case() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n - 1; i++) cin >> b[i];

	for (int i = 0; i < n - 1; i++) {
		if (a[i] != b[i]) {
			cout << i + 1 << endl;
			return;
		}
	}
}

int main() {
    faster();
    tester() 
        run_test_case();
}