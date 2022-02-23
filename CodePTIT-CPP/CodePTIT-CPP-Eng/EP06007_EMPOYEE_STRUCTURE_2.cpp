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
	string id = "000", name, gender, dob, address, tax, contract;
	
	void standardName() {
		for (int i = 0; i < name.length(); i++) {
			if (name[i] >= 'A' && name[i] <= 'Z') name[i] += 32;
		}
		name[0] -= 32;
		for (int i = 0; i < name.length(); i++) {
			if (name[i] == ' ' && name[i + 1] != ' ') {
				name[i + 1] -= 32;
			}
		}
	}
	
	void fixDate() {
		if (dob[1] == '/') dob.insert(0, "0");
		if (dob[4] == '/') dob.insert(3, "0");
	}
};

void input(struct Employee &a) {
	scanf("\n");
	getline(cin, a.name);
	cin >> a.gender >> a.dob;
	scanf("\n");
	getline(cin, a.address);
	cin >> a.tax >> a.contract;
}

void printlist(struct Employee lst[], int n) {
	for (int i = 0; i < n; i++) {
		lst[i].standardName();
		lst[i].fixDate();
		if (i < 9) lst[i].id += "0";
		
		cout << lst[i].id << i + 1 <<  " " << lst[i].name << " " << lst[i].gender << " " << lst[i].dob << " " << lst[i].address << " " << lst[i].tax << " " << lst[i].contract << endl;
	}
}

int main(){
    struct Employee lst[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    printlist(lst,N);
    return 0;
}

