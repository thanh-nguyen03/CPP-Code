#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <cstring>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define matrix vector<vector<int>>

int k, m, n;
map<string, int> dic;
matrix vs;
vector<vector<char>> a;
string s, curr;
vector<int> rowDir = {-1, -1, -1, 0, 0, 1, 1, 1};
vector<int> colDir = {-1, 0, 1, -1, 1, -1, 0, 1};
bool flag = 0;

void init() {
    dic.clear();
    a.clear();
    vs.clear();
    cin >> k >> m >> n;
    while (k--) {
        cin >> s;
        dic[s] = 1;
    }
    a.resize(m, vector<char> (n));
    for (auto &i : a) {
        for (auto &j : i) {
            cin >> j;
        }
    }
    vs.resize(m, vector<int> (n, 0));
    flag = 0;
}

void backtrack(int i, int j) {
    if (i < 0 || j < 0 || i == m || j == n) return;
    if (vs[i][j]) return;
    vs[i][j] = 1;
    curr.pb(a[i][j]);
    if (dic[curr]) {
        cout << curr << " ";
        flag = 1;
        // return;
    }
    for (int k = 0; k < 8; k++) {
        backtrack(i + rowDir[k], j + colDir[k]);
    }
    vs[i][j] = 0;
    curr.pop_back();
}

void run_test_case() {
    init();
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            backtrack(i, j);
        }
    }
    if (!flag) cout << -1;
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}