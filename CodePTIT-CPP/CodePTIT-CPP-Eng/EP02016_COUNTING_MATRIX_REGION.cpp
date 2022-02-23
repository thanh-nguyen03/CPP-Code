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

int rowDir[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int colDir[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int visited[105][105];
int a[105][105], n, m;

void dfs(int i, int j) {
	if (i < 0 || i == n || j < 0 || j == m) return;
	if (a[i][j] == 0) return;
	if (visited[i][j] == 1) return;
	visited[i][j] = 1;
	for (int k = 0; k < 8; k++)
		dfs(i + rowDir[k], j + colDir[k]);
}

void run_test_case() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			visited[i][j] = 0;
		}
			
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 1 && visited[i][j] == 0) {
				dfs(i, j);
				count++;
			}
		}
	}
	cout << count << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--)
		run_test_case();
}

