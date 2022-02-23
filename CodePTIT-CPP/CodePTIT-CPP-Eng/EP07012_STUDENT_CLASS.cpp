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

class Student {
	public:
	string name, id = "B20DCCN001 ", dob, lop;
	db gpa;
	
	void standardDob() {
		if (dob[1] == '/') dob.insert(0, "0");
		if (dob[4] == '/') dob.insert(3, "0");
	}
};

void input(Student &a) {
	getline(cin, a.name);
	cin >> a.lop >> a.dob >> a.gpa;
	a.standardDob();
}

void output(Student a) {
	cout << a.id << a.name << " " << a.lop << " " << a.dob << " " << fixed << setprecision(2) << a.gpa;
}

int main() {
    Student A;
    input(A);
	output(A);
}

