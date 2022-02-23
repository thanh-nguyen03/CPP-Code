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
	int len = s.length(), check = 0;
	if (s[len - 1] == 'y' || s[len - 1] == 'Y') {
		if (s[len - 2] == 'p' || s[len - 2] == 'P') {
			if (s[len - 3] == '.') {
				check = 1;
			}
		}
	}
	if (check) cout << "yes";
	else cout << "no";
}

