#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <cstring>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
int a[15][15], visited[15][15], n, flag = 0;
set<string> ans;

void dfs(int i, int j, string s) {
    if (i == n || j == n || i < 0 || j < 0) return;
    if (a[i][j] == 0) return;
    if (visited[i][j]) return;
    if (i == n - 1 && j == n - 1) {
        flag = 1;
        ans.insert(s);
        return;
    }
    visited[i][j] = 1;
    dfs(i + 1, j, s + "D");
    dfs(i, j + 1, s + "R");
    dfs(i, j - 1, s + "L");
    dfs(i - 1, j, s + "U");
    visited[i][j] = 0;
}

void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0;j < n; j++) {
            cin >> a[i][j];
        }
    }
    memset(visited, 0, sizeof(visited));
    flag = 0;
    dfs(0, 0, "");
    if (!flag) cout << -1;
    else {
        for (auto x : ans) cout << x << " ";
    }
    cout << endl;
    ans.clear();
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}