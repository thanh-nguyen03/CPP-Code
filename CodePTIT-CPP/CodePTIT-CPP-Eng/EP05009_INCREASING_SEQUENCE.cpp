#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <string>
#include <fstream>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
vector<int> tmp;
set<string> ans;
vector<vector<int>> back;
int n, a[100];

void backtrack(int pos) {
	for (int i = pos + 1; i <= n; i++) {
		if (a[i] > a[pos]) {
			tmp.pb(a[i]);
			if (tmp.size() > 1) back.pb(tmp);
			backtrack(i);
			tmp.erase(tmp.end() - 1, tmp.end());
		}
	}
}

int main() {
	ifstream ip;
	ip.open("DAYSO.in");
	ip >> n;
	a[0] = 0;
	for (int i = 1; i <= n; i++) ip >> a[i];
	backtrack(0);
	for (auto b : back) {
		string s = "";
		for (int i = 0; i < b.size(); i++) {
			s += to_string(b[i]) + " ";
		}
		ans.insert(s);
	}
	for (auto x : ans) cout << x << endl;
	ip.close();
}

