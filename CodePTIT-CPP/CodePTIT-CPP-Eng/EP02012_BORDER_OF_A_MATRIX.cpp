#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, a[1000][1000];
void run_test_case() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
				cout << a[i][j] << " ";
			}
			else cout << " ";
		}
		cout << endl;
	}
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

