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

ll n, m, x;
ll parent[MAX] = {};
ll sz[MAX] = {};

void init() {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        sz[i] = i;
    }
}

ll FIND(ll u) {
    if (u == parent[u]) return u;
    return parent[u] = FIND(parent[u]);
}

void Uninion(ll u, ll v) {
    u = FIND(u);
    v = FIND(v);
    if (u == v) return;
    if (sz[u] < sz[v]) {
        parent[u] = v;
        sz[v] += sz[u];
    }
    else {
        parent[v] = u;
        sz[u] += sz[v];
    }
}

void run_test_case() {
    cin >> n >> m >> x;
    init();
    for (int i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        Uninion(a, b);
    }
    vll res;
    for (int i = 1; i <= n; i++) {
        if (parent[i] != parent[x]) res.pb(i);
    }
    if (res.size() == 0) cout << 0 << endl;
    else {
        for (auto i:res) cout << i << endl;
    }
}

int main() {
    faster();
        run_test_case();
}