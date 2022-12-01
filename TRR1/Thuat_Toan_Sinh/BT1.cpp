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
int cnt = 0;
void sol(int one, int zero, int pos, string s) {
	if (pos == 0) {
		cout << s << endl;
		cnt++;
	}
	else {
		if (one) sol(one - 1, zero, pos - 1, s + "R");
		if (zero) sol(one, zero - 1, pos - 1, s + "U");
	}
}

int n, m;
void run_test_case() {
	cin >> n >> m;
	sol(m, n, n + m, "");
	cout << cnt << endl;
}

int main() {
    run_test_case();
}