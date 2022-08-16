#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define all(x) x.begin(), x.end()
#define tester() int t; cin >> t; while(t--)

int n;
void run_test_case() {
    cin >> n;
    queue<ll> q;
    q.push(1);
    while (q.front() % n != 0) {
        ll tmp = q.front();
        q.push(tmp * 10);
        q.push(tmp * 10 + 1);
        q.pop();
    }

    cout << q.front() << endl;
}

int main() {
    tester() 
        run_test_case();
}