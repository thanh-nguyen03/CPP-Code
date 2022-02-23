#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int de;
char dapan1[] = "ABBADCCABDCCABD";
char dapan2[] = "ACCABCDDBBCDDBB";
void run_test_case() {
	cin >> de;
	int i = 0, count = 0;
	char c;
	if (de == 101) {
		for (; i < 15; i++) {
			cin >> c;
			if (c == dapan1[i]) count++;
		}
	}
	else {
		for (; i < 15; i++) {
			cin >> c;
			if (c == dapan2[i]) count++;
		}
	}
	double ans = 10.0 * count / 15;
	cout << fixed << setprecision(2) << ans << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--) 
		run_test_case();
}

