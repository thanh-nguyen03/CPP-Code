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

int v, e, n, m;
vi dinh[2005];
int parent[2005];
bool visited[2005];

void chuyen() {
    for (int i = 0; i < e; i++) {
        int x, y;
        cin >> x >> y;
        dinh[x].pb(y);
        dinh[y].pb(x);
    }

    memset(visited, false, sizeof(visited));
    memset(parent, false, sizeof(parent));
}

void bfs(int u, int v) {
    queue<int> q;
    q.push(u);
    while (!q.empty()) {
        int top = q.front();
        visited[top] = true;
        q.pop();
        if (top == v) return;
        for (auto i:dinh[top]) {
            if (!visited[i]) {
                parent[i] = top;
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

void check(int u, int v ) {
    vi path;
    if (!visited[v]) {
        cout << "No path" << endl;
        return;
    }
    
    while (u != v) {
        if (u == 0) {
            cout << "No path" << endl;
            return;
        }
        path.pb(v);
        v = parent[v];
    }
    path.pb(v);
    reverse(all(path));
    for (auto i:path) {
        cout << i << " ";
    }
    cout << endl;
}

void run_test_case() {
    cin >> v >> e >> n;
    for (int i = 0; i < 2005; i++) {
        dinh[i].clear();
    }
    chuyen();

    for (int i = 1; i <= v; i++) {
        if (n == i) continue;
        bfs(n, i);
        check(n, i);
        memset(visited, false, sizeof(visited));
        memset(parent, false, sizeof(parent));
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}