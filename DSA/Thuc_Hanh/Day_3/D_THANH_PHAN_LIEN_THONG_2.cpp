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
#define MAX 100005

vector<vll> a(MAX);
ll bs[MAX];
ll xet = 0, v, e, x, y;

void BFS(int b) {
    queue<int> q;
    q.push(b);
    int d;
    bs[b] = 1;
    while (q.size()) {
        d = q.front();
        q.pop();
        for (auto i:a[d]) {
            if (!bs[i] && i != xet) {
                bs[i] = 1;
                q.push(i);
            }
        }
    }
}

void run_test_case() {
    cin >> v >> e;
    for (int i = 1; i <= v; i++) {
        a[i].clear();
        bs[i] = 0;
    }

    for (int i = 0; i < e; i++) {
        cin >> x >> y;
        a[x].pb(y);
        a[y].pb(x);
    }
    ll cnt = 0;
    for (int i = 1; i <= v; i++) {
        cnt = 0;
        xet = i;
        memset(bs, 0, sizeof(bs));
        for (int j = 1; j <= v; j++) {
            if (!bs[j] && j != xet) {
                cnt++;
                BFS(j);
            }
        } 
        cout << cnt << endl;
    }
}

int main() {
    faster();
        run_test_case();
}