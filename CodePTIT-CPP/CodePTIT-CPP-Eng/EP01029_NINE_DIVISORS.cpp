#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

bool snt(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main() {
	int n;
	cin >> n;
	int count = 0;
	for (int i = 2; (int)pow(i, 8) <= n; i++) {
		if (snt(i)) count++;
	}
	
	int s1 = (int)sqrt(n);
	int s = (int)sqrt(s1);
	for (int a = 0; a <= s; a++) {
		if (snt(a)) {
			for (int b = s1 / a; b > a; b--) {
				if (snt(b)) count++;
			}
		}
	}
	cout << count;
}

