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

void bubbleSort () {
	int step = 0;
	bool check;
	for (int i = 0; i < n - 1; i++) {
		check = false;
		for (int j = 0; j < n - i - 1; j++) 
			if (a[j] > a[j + 1]) {
				swap (a[j + 1], a[j]);
				check = true;
			}
		if (check) {
			cout << "Buoc " << ++step << ":";
			for (int k = 0; k < n; k++)	cout << " " << a[k];
			cout << endl;
		}
	}
}

void run_test_case() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    bubbleSort();
}

int main() {
    faster();
        run_test_case();
}