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

class Examinee {
	public:
	string name, dob;
	db s1, s2, s3, total;
};

void input(Examinee &a) {
	getline(cin, a.name);
	cin >> a.dob >> a.s1 >> a.s2 >> a.s3;
	a.total = a.s1 + a.s2 + a.s3;
}

void output(Examinee a) {
	cout << a.name << " " << a.dob << " " << fixed << setprecision(1) << a.total;
}

int main() {
	Examinee A;
	input(A);
	output(A);
}

