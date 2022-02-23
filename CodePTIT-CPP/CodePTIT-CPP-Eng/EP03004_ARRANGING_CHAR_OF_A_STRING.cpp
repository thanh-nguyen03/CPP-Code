#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

string s;
void run_test_case() {
	cin >> s;
	int len = s.length();
	unordered_map<char, int> mp;
	int len_check = len % 2 == 0 ? len : len + 1;
	bool ok = 1;
	for (int i = 0; i < len; i++) {
		mp[s[i]]++;
		if (mp[s[i]] > len_check / 2) ok = 0;
	}
	cout << ok << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

