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

struct Student {
	string msv = "B20DCCN001", name, clss, dob;
	float gpa;
};

void input(struct Student &a) {
	getline(cin, a.name);
	getline(cin, a.clss);
	getline(cin, a.dob);
	cin >> a.gpa;
}

void print(struct Student a) {
	if (a.dob[1] == '/') a.dob.insert(0, "0");
	if (a.dob[3] == '/') a.dob.insert(2, "0");
	else if (a.dob[4] == '/') a.dob.insert(3, "0");
	cout << a.msv << " " << a.name << " " << a.clss << " " << a.dob << " " << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct Student a;
    input(a);
    print(a);
    return 0;
}

