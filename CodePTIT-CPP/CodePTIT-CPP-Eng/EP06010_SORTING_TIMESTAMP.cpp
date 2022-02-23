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

struct Time {
	int h, m, s;
};

bool cmp(Time a, Time b) {
	if (a.h == b.h) {
		if (a.m == b.m) return a.s < b.s;
		return a.m < b.m;
	}
	return a.h < b.h;
}

void input(Time &a) {
	cin.ignore();
	cin >> a.h >> a.m >> a.s;
}

void output(Time a) {
	cout << a.h << " " << a.m << " " << a.s << endl;
}

int main() {
    fastread();
	int n;
	cin >> n;
	Time lst[n + 10];
	for (int i = 0; i < n; i++) input(lst[i]);
	sort(lst, lst + n, cmp);
	for (int i = 0; i < n; i++) output(lst[i]);
}

