#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <string>
#include <sstream>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

string s1, s2;
void run_test_case() {
	getline(cin, s1);
	getline(cin, s2);
	
	set<string> s;
	stringstream ss1(s1);
	string token;
	while (ss1 >> token) {
		s.insert(token);
	}
	stringstream ss2(s2);
	while (ss2 >> token) {
		s.erase(token);
	}
	
	for (auto itr = s.begin(); itr != s.end(); itr++) {
		cout << *itr << " ";
	}
	cout << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
		run_test_case();
}

