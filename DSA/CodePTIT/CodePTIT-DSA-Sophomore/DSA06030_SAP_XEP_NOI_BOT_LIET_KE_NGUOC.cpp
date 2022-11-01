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
vi a;
vector<vi> ans;
void bubbleSort () {
	bool check;
	for (int i = 0; i < n - 1; i++) {
		check = false;
		for (int j = 0; j < n - i - 1; j++) 
			if (a[j] > a[j + 1]) {
				swap (a[j + 1], a[j]);
				check = true;
			}
		if (check) {
			ans.push_back(a);
		}
	}
	for (int i = ans.size() - 1; i >= 0; i--) {
        cout << "Buoc " << i + 1 << ":";
        for (auto j : ans[i])   cout << " " << j;
        cout << endl;
    }
	a.clear();
    ans.clear();
}

void run_test_case() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    bubbleSort();
}

int main() {
    faster();
    tester()
        run_test_case();
}