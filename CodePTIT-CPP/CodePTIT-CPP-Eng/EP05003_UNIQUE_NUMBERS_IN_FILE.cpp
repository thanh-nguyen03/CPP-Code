#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include <map>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;

int main() {
	ifstream input;
	input.open("DATA.in");
	int n;
	map<int, int> mp;
	while (input >> n) {
		mp[n]++;
	}
	for (auto x : mp) {
		cout << x.first << " " << x.second << endl;
	}
	input.close();
}

