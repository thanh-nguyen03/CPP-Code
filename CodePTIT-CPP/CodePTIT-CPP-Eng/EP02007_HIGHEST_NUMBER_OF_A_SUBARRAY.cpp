#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, k, a[10000000];
void run_test_case() {
	cin >> n >> k;
	multiset<int> s;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < k; i++) {
		s.insert(a[i]);
	}
	cout << *s.rbegin() << " ";
	for (int i = k; i < n; i++) {
		s.erase(s.find(a[i - k]));
		s.insert(a[i]);
		cout << *s.rbegin() << " ";
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

