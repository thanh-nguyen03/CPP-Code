#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n;
void run_test_case() {
	cin >> n;
	int count = 0;
	while (n >= 1000) {
		n -= 1000;
		count++;
	}
	while (n >= 500) {
		n -= 500;
		count++;
	}
	while (n >= 200) {
		n -= 200;
		count++;
	}
	while (n >= 100) {
		n -= 100;
		count++;
	}while (n >= 50) {
		n -= 50;
		count++;
	}
	while (n >= 20) {
		n -= 20;
		count++;
	}
	while (n >= 10) {
		n -= 10;
		count++;
	}
	while (n >= 5) {
		n -= 5;
		count++;
	}
	while (n >= 2) {
		n -= 2;
		count++;
	}
	while (n >= 1) {
		n -= 1;
		count++;
	}
	cout << count << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

