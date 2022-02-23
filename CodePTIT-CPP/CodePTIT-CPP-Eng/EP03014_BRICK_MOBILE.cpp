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

bool palindrome(string s) {
	int len = s.length();
	for (int i = 0; i < len / 2; i++) {
		if (s[i] != s[len - i - 1]) return false;
	}
	return true;
}

string s;
void run_test_case() {
	cin >> s;
	string ans;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
        if (s[i] >= 'a' && s[i] <= 'c') {
            ans.push_back(2);
        }
        if (s[i] >= 'd' && s[i] <= 'f') {
            ans.push_back(3);
        }
        if (s[i] >= 'g' && s[i] <= 'i') {
            ans.push_back(4);
        }
        if (s[i] >= 'j' && s[i] <= 'l') {
            ans.push_back(5);
        }
        if (s[i] >= 'm' && s[i] <= 'o') {
            ans.push_back(6);
        }
        if (s[i] >= 'p' && s[i] <= 's') {
            ans.push_back(7);
        }
        if (s[i] >= 't' && s[i] <= 'v') {
            ans.push_back(8);
        }
        if (s[i] >= 'w' && s[i] <= 'z') {
            ans.push_back(9);
        }
    }
    if (palindrome(ans) == 1) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

