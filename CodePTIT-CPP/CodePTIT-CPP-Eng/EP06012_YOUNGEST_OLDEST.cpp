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

struct Human {
	string name, dob;
	int d, m, y;
	
	void getDob() {
		d = (dob[0] - '0') * 10 + (dob[1] - '0');
		m = (dob[3] - '0') * 10 + (dob[4] - '0');
		y = (dob[6] - '0') * 1000 + (dob[7] - '0') * 100 + (dob[8] - '0') * 10 + (dob[9] - '0');
	}
};

bool cmp(Human a, Human b) {
	if (a.y == b.y) {
		if (a.m == b.m) return a.d < b.d;
		return a.m < b.m;
	}
	return a.y < b.y;
}

void input(Human &a) {
	cin >> a.name >> a.dob;
	a.getDob();
}

int main() {
    fastread();
	int n;
	cin >> n;
	Human lst[100];
	for (int i = 0; i < n; i++) input(lst[i]);
	sort(lst, lst + n, cmp);
	cout << lst[n - 1].name << endl << lst[0].name;
}
