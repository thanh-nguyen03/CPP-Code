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

int main() {
    fastread();
	int n, m, p;
	cin >> n >> m;
	int a[n], b[m];
	vector<int> ans;
	
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];
	
	cin >> p;
	for (int i = 0; i < p; i++) ans.push_back(a[i]);
	for (int i = 0; i < m; i++) ans.push_back(b[i]);
	for (int i = p; i < n; i++) ans.push_back(a[i]);
	for (int i = 0; i < n + m; i++) cout << ans[i] << " ";
}

