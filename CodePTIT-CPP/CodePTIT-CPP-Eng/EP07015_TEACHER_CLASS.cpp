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

class Teacher {
	public:
	string id, name;
	int base, spFund, level = 0, total;
	
	void getLevel() {
		level += (id[2] - '0') * 10 + (id[3] - '0');
	}
	
	void getSpFund() {
		if (id[0] == 'H' && id[1] == 'T') spFund = 2000000;
		else if (id[0] == 'H' && id[1] == 'P') spFund = 900000;
		else if (id[0] == 'G' && id[1] == 'V') spFund = 500000;
	}
};

void input(Teacher &a) {
	getline(cin, a.id);
	getline(cin, a.name);
	cin >> a.base;
	a.getLevel();
	a.getSpFund();
	a.total = a.base * a.level + a.spFund;
}

void output(Teacher a) {
	cout << a.id << " " << a.name << " " << a.level << " " << a.spFund << " " << a.total;
}

int main() {
	Teacher A;
	input(A);
	output(A);
}
