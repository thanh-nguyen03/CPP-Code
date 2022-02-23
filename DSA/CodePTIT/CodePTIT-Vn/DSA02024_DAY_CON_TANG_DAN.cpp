#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
vector<string> bin;
vector<string> ans;
int n, a[1000];

void binary(int pos, string s) {
	if (pos == 0) bin.pb(s);
	else {
		binary(pos - 1, s + "0");
		binary(pos - 1, s + "1");
	}
}

bool checkIncrease(string s) {
	vector<int> idx;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1') idx.pb(i);
	}
	if (idx.size() < 2) return 0;
	for (int i = 1; i < idx.size(); i++) {
		if (a[idx[i]] < a[idx[i - 1]]) return 0;
	}
	return 1;
}

int main() {
	cin >> n;
	binary(n, "");
	for (int i = 0; i < n; i++) cin >> a[i];
	for (auto b : bin) {
		if (checkIncrease(b)) {
			string s = "";
			for (int i = 0; i < b.size(); i++) {
				if (b[i] == '1') s += to_string(a[i]) + " ";
			}
			ans.pb(s);
		}
	}
	sort(ans.begin(), ans.end());
	for (auto x : ans) cout << x << endl;
}

