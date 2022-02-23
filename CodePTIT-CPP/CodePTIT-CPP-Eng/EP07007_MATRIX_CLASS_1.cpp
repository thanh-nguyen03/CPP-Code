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


void input(Matrix &a) {
	cin >> a.n >> a.m;
	for (int i = 0; i < a.n; i++) {
		for (int j = 0; j < a.m; j++) {
			cin >> a.mtx[i][j];
		}
	}
}

void transpose(Matrix a, Matrix &trans) {
	trans.n = a.m;
	trans.m = a.n;
	for (int i = 0; i < trans.n; i++) {
		for (int j = 0; j < trans.m; j++) {
			trans.mtx[i][j] = a.mtx[j][i];
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
	Matrix a, trans, ans;
	input(a);
	transpose(a, trans);
	product(a, trans, ans);
	output(ans);
}

int main() {
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}



