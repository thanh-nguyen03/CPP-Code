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

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
    fastread();
	int m, n, k, a[105][105];
	cin >> m >> n >> k;
	k--;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m - 1; i++) {
		for (int j = i + 1; j < m; j++) {
			if (a[i][k] > a[j][k]) {
				swap(&a[i][k], &a[j][k]);
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

