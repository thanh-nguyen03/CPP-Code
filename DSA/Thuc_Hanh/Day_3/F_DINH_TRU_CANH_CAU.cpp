#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)
#define MAX 1000000

vi a[MAX];
bitset<MAX> visited;
int dis[MAX] = {}, low[MAX] = {}, par[MAX] = {};

int cnt = 1, canhCau = 0;
set<int> dinhTru;

void DFS(int u) {
    int child = 0;
    visited[u] = 1;
    dis[u] = low[u] = cnt++;
    for (auto &i:a[u]) {
        if (!visited[i]) {
            child++;
            par[i] = u;
            DFS(i);
            low[u] = min(low[u], low[i]);
            if (low[i] > dis[u]) {
                canhCau++;
            }
            if (low[i] >= dis[u] && par[u]) {
                dinhTru.insert(u);
            }
        }
        else if (i != par[u]) {
            low[u] = min(low[u], dis[i]);
        }
    }
    if (child > 1 && !par[u]) {
        dinhTru.insert(u);
    }
}

int v, e, x, y;
void run_test_case() {
    cin >> v >> e;
    while (e--) {
        cin >> x >> y;
        a[x].pb(y);
        a[y].pb(x);
    }
    for (int i = 1; i <= v; i++) {
        if (!visited[i]) {
            DFS(i);
        }
    }
    cout << dinhTru.size() << " " << canhCau;
}

int main() {
    faster();
        run_test_case();
}