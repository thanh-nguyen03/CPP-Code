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

ll n;
void run_test_case() {
    cin >> n;
    queue<ll> q;
    q.push(1);
    while (q.front() % n != 0) {
        ll tmp = q.front(); q.pop();
        q.push(tmp * 10);
        q.push(tmp * 10 + 1);
    }
    cout << q.front() << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}