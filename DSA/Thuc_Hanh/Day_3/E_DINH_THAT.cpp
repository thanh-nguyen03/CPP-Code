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

vi a[105];
int u, v, n, m;

bool check(int x) {
    bitset<105> visited;
    visited[x] = 1;
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while (q.size()) {
        x = q.front();
        q.pop();
        for (auto &i:a[x]) {
            if (!visited[i]) {
                if (i == v) return 1;
                q.push(i);
                visited[i] = 1;
            }
        }
    }

    return 0;
}

void run_test_case() {
    cin >> n >> m >> u >> v;
    int x, y;
    while (m--) {
        cin >> x >> y;
        a[x].pb(y);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (i == u || i == v) {
            continue;
        }
        ans += !check(i);
    }
    cout << ans << endl;
    for (int i = 1; i <= n; i++) {
        a[i].clear();
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}