#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

int n, m;
bool visited[105][105];
char a[105][105];

int rowDir[] = {-1, 0, 0, 1};
int colDir[] = {0, -1, 1, 0};

void dfs(int i, int j) {
    if (i < 0 || j < 0 || i == n || j == m) return;
    if (a[i][j] == 'X') return;
    if (visited[i][j]) return;
    visited[i][j] = 1;
    for (int k = 0; k < 4; k++) 
        dfs(i + rowDir[k], j + colDir[k]);
}

void run_test_case() {
    cin >> n >> m;
    memset(visited, 0, sizeof(visited));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < m; i++) {
        if (a[0][i] == 'O') dfs(0, i);
        if (a[n - 1][i] == 'O') dfs(n - 1, i);
    }

    for (int i = 0; i < n; i++) {
        if (a[i][0] == 'O') dfs(i, 0);
        if (a[i][m - 1] == 'O') dfs(i, m - 1);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visited[i][j] == 1) cout << "O ";
            else cout << "X ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}