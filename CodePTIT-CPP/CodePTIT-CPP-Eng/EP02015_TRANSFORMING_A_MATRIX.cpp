#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, a[105][105];
void run_test_case() {
	cin >> n;
	int hang[n] = {0}, cot[n] = {0}, matrixSum = 0;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			sum += a[i][j];
			cot[j] += a[i][j];
			matrixSum += a[i][j];
		}
		hang[i] += sum;
	}
	int maxRow = 0, maxCol = 0;
	for (int i = 0; i < n; i++) {
		maxRow = max(maxRow, hang[i]);
		maxCol = max(maxCol, cot[i]);
	}
	cout << max(maxCol, maxRow) * n - matrixSum << endl;
}

int main() {
    fastread();
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

