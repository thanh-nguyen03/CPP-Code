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

struct Examinee {
	string name, dob;
	db sub1, sub2, sub3, tong;
};

void input(struct Examinee &a) {
	getline(cin, a.name);
	getline(cin, a.dob);
	cin >> a.sub1 >> a.sub2 >> a.sub3;
	a.tong = a.sub1 + a.sub2 + a.sub3;
}

void print(struct Examinee a) {
	cout << a.name << " " << a.dob << " " << fixed << setprecision(1) << a.tong;
}

int main(){
    struct Examinee A;
    input(A);
    print(A);
    return 0;
}

