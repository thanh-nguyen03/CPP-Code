#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define all(x) x.begin(), x.end()
#define tester() int t; cin >> t; while(t--)

ll n;
void run_test_case() {
    cin >> n;
    queue<ll> q;
    q.push(1);
    int cnt = 0;
    while (q.front() <= n) {
        ll tmp = q.front();
        cnt++;
        q.push(tmp * 10);
        q.push(tmp * 10 + 1);
        q.pop();
    }
    
    cout << cnt << endl;
}

int main() {
    tester() 
        run_test_case();
}