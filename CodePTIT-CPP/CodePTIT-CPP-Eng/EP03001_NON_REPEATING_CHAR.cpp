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
	int b[100] = {0};
	for (int i = 0; i < s.length(); i++) b[s[i] - 'A']++;
	for (int i = 0; i < s.length(); i++) {
		if (b[s[i] - 'A'] == 1) cout << s[i]; 
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

