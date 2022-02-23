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
#define pb push_back

class Matrix {
	public:
	int n, m;
	int mtx[100][100] = {0};
};


void input(Matrix &a, Matrix &b) {
	cin >> a.n >> a.m >> b.m;
	b.n = a.m;
	for (int i = 0; i < a.n; i++) {
		for (int j = 0; j < a.m; j++) {
			cin >> a.mtx[i][j];
		}
	}
	for (int i = 0; i < b.n; i++) {
		for (int j = 0; j < b.m; j++) {
			cin >> b.mtx[i][j];
		}
	}
}

void product(Matrix a, Matrix b, Matrix &ans) {
	ans.n = a.n;
	ans.m = b.m;
	for (int i = 0; i < a.n; i++) {
		for (int j = 0; j < b.m; j++) {
			for (int k = 0; k < a.m; k++) {
				ans.mtx[i][j] += a.mtx[i][k] * b.mtx[k][j];
			}
		}
	}
}

void output(Matrix a) {
	for (int i = 0; i < a.n; i++) {
		for (int j = 0; j < a.m; j++) {
			cout << a.mtx[i][j] << " ";
		}
		cout << endl;
	}
}

void run_test_case() {
	Matrix a, b, ans;
	input(a, b);
	product(a, b, ans);
	output(ans);
}

int main() {
	run_test_case();
}



