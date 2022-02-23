#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <string>
using namespace std;

typedef long long ll;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
	int m, s;
	cin >> m >> s;
	int last = m;
	if (m * 9 < s || s == 0) {
		cout << "-1 -1";
		return 0;
	}
	if (m == 1) {
		cout << s << " " << s;
		return 0;
	}
	vector<int> a, b;
	while (s > 9) {
		a.push_back(9);
		b.push_back(9);
		s -= 9;
		m--;
	}
	int n = m - 1;
	while (m > 1) {
		b.push_back(0);
		m--;
	}
	b.push_back(s);
	sort(b.begin(), b.end(), greater<int>());
	
	// Min
	a.push_back(s - 1);
	while (n > 0) {
		a.push_back(0);
		n--;
	}
	a[last - 1]++;
	for (int i = last - 1; i >= 0; i--) cout << a[i];
	cout << " ";
	for (int i : b) {
		cout << i;
	}
}

