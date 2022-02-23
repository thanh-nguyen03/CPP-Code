#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

string s;
void run_test_case() {
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len; i++) {
		if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4') {
			i += 2;
		}
		else cout << s[i];
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

3
123084567
3300478808445
1084
