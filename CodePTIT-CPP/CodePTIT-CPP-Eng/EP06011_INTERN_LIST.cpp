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
	int id;
	string msv, name, lop, email, comp;
};

bool cmp(Student a, Student b) {
	return a.msv < b.msv;
}

void input(Student &a, int id) {
	scanf("\n");
	getline(cin, a.msv);
	getline(cin, a.name);
	getline(cin, a.lop);
	getline(cin, a.email);
	getline(cin, a.comp);
	a.id = id;
}

void output(Student a) {
	cout << a.id << " " << a.msv << " " << a.name << " " << a.lop << " " << a.email << " " << a.comp << endl;
}

int main() {
	int n, t;
	cin >> n;
	Student lst[200];
	for (int i = 0; i < n; i++) input(lst[i], i + 1);
	string q;
	cin >> t;
	sort(lst, lst + n, cmp);
	while (t--) {
		cin >> q;
		for (int i = 0; i < n; i++) {
			if (lst[i].comp == q) output(lst[i]);
		}
	}
}

