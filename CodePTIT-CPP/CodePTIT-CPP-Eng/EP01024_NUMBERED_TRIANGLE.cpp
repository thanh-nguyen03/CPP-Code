#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

void draw(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << j;
		}
		cout << endl;
	}
}

int main() {
    fastread();
	int n;
	cin >> n;
	draw(n);
}

