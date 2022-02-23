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

struct Item {
	int id = 0;
	string name = "a", group = "abc";
	db in, out, profit;
};

bool cmp(struct Item a, struct Item b) {
	return a.profit > b.profit;
}

void input(struct Item a[], int n) {
	for (int i = 0; i < n; i++) {
		cin.ignore();
		getline(cin, a[i].name);
		getline(cin, a[i].group);
		cin >> a[i].in >> a[i].out;
		a[i].id = i + 1;
		a[i].profit = a[i].out - a[i].in;
	}
}

void print(struct Item a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i].id << " " << a[i].name << " " << a[i].group << " " << fixed << setprecision(2) << a[i].profit << endl;
	}
}

void swap(struct Item &a, struct Item &b) {
	struct Item tmp = a;
	a = b;
	b = tmp;
}

int main() {
    fastread();
    int n;
    cin >> n;
	struct Item lst[100];
	input(lst, n);
	
	// Sort
	sort(lst, lst + n, cmp);
	// Output
	print(lst, n);
}

