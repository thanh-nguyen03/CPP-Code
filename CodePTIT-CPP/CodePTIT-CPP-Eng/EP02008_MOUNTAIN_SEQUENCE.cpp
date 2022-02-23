#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, l, r, a[100000];
void run_test_case() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> l >> r;
	int start = l, end = r;
	while(a[start] < a[start + 1] && start < r) start++;
	while(a[end] < a[end - 1] && end > l) end--;
	if (end == start) {
		cout << "Yes" << endl;
	}
	else cout << "No" << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

