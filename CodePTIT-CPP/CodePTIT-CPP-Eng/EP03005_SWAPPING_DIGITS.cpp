#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

string s;
void run_test_case() {
	cin >> s;
	int len = s.size(), index = -1;
	for (int i = 0; i < len - 1; i++) {
		if (s[i] > s[i + 1]) {
			index = i;
		}
	}
	if (index == -1) {
		cout << -1 << endl;
		return;
	}
	char max = -1;
	int k = -1;
	for (int i = index + 1; i < len; i++) {
		if (s[i]> max && s[i] < s[index]){
			max = s[i];
			k = i;
		}
	}
	// Swap
	char tmp = s[index];
	s[index] = s[k];
	s[k] = tmp;
	cout << s << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

