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
	string name, id;
	db s1, s2, s3, bonus, total;
	
	void getBonusScore() {
		if (id[2] == '1') bonus = 0.5;
		else if (id[2] == '2') bonus = 1.0;
		else if (id[2] == '3') bonus = 2.5;
	}
};

void input(Examinee &a) {
	getline(cin, a.id);
	getline(cin, a.name);
	cin >> a.s1 >> a.s2 >> a.s3;
	a.getBonusScore();
	a.total = a.s1 * 2 + a.s2 + a.s3;
}

void output(Examinee a) {
	cout << a.id << " " << a.name << " ";
	printf("%g %g", a.bonus, a.total);
	if (a.total + a.bonus >= 24) cout << " TRUNG TUYEN";
	else cout << " TRUOT";
}

int main() {
	Examinee A;
	input(A);
	output(A);
}


