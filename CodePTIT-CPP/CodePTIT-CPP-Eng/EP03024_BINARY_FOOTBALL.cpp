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



int main() {
    fastread();
	string s;
	cin >> s;
	int len = s.length();
	if (len < 7) {
		cout << "NO";
		return 0;
	}
	for (int i = 0; i < len; i++) {
		bool check = 1;
		for (int j = i + 1; j < i + 7; j++) {
			if (s[j] != s[i]) {
				check = 0;
				break;
			}
		}
		if (check == 1) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}

