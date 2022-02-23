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
#define pb push_back

int main() {
	string s;
	bool flag = 1;
	while (cin >> s) {
		int len = s.size();
		for (int i = 0; i < len; i++) {
			if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
		}
		if (flag) {
			s[0] -= 32;
			flag = 0;
		}
		if (s[len - 1] == '.' || s[len - 1] == '!' || s[len - 1] == '?') {
			s.erase(s.end() - 1);
			cout << s << endl;
			flag = 1;
		}
		else cout << s << " ";
	}
}

