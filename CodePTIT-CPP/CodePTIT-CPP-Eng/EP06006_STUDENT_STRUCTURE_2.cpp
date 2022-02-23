#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

struct Student {
	string msv = "B20DCCN0", name, clss, dob;
	db gpa;
	
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

void input(struct Student lst[], int n) {
	for (int i = 0; i < n; i++) {
		scanf("\n");
		getline(cin, lst[i].name);
		cin >> lst[i].clss >> lst[i].dob >> lst[i].gpa;
	}
}

void print(struct Student lst[], int n) {
	for (int i = 0; i < n; i++) {
		lst[i].standardName();
		lst[i].fixDate();
		if (i < 9) lst[i].msv += "0";
		cout << lst[i].msv << i + 1 << " " << lst[i].name << " " << lst[i].clss << " " << lst[i].dob << " " << fixed << setprecision(2) << lst[i].gpa << endl;
	}
}

int main(){
    struct Student lst[50];
    int N;
    cin >> N;
    input(lst, N);
    print(lst, N);
    return 0;
}

