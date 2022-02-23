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
	string id, name, lop;
	db sub1, sub2, sub3;
};

bool cmp(Student a, Student b) {
	return a.name < b.name;
}

void input(Student &a) {
	cin.ignore();
	getline(cin, a.id);
	getline(cin, a.name);
	getline(cin, a.lop);
	cin >> a.sub1 >> a.sub2 >> a.sub3;
}

void output(Student a) {
	cout << a.id << " " << a.name << " " << a.lop << " ";
	cout << fixed << setprecision(1);
	cout << a.sub1 << " " << a.sub2 << " " << a.sub3 << endl;
}

int main() {
    fastread();
	int n;
	cin >> n;
	struct Student lst[100];
	for (int i = 0; i < n; i++) input(lst[i]);
	sort(lst, lst + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " ";
		output(lst[i]);
	}
}

