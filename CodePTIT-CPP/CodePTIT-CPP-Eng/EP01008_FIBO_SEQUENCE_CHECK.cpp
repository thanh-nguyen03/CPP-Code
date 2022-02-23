#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

bool checkFibo(int n) {
	int a0 = 0, a1 = 1, a = a0 + a1;
	while(a < n) {
		a0 = a1;
		a1 = a;
		a = a0 + a1;
	}
	if (a == n || n == 0) return 1;
	return 0;
}

int n, a[1000000];
void run_test_case() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) {
		if (checkFibo(a[i])) cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

