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

struct Employee {
	public:
	string id = "00001 ", name, gender, dob, address, taxNum, contract;
};

void input(Employee &a) {
	getline(cin, a.name);
	cin >> a.gender >> a.dob;
	scanf("\n");
	getline(cin, a.address);
	cin >> a.taxNum >> a.contract;
}

void print(Employee a) {
	// Fix dob and contract
	if (a.dob[1] == '/') a.dob.insert(0, "0");
	if (a.dob[4] == '/') a.dob.insert(3, "0");
	if (a.contract[1] == '/') a.contract.insert(0, "0");
	if (a.contract[4] == '/') a.contract.insert(3, "0");
	
	// Print
	cout << a.id << a.name << " " << a.gender << " " << a.dob << " " << a.address << " " << a.taxNum << " " << a.contract;
}

int main(){
    Employee a;
    input(a);
    print(a);
    return 0;
}



