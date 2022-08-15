#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

ll n, ans, a;
priority_queue<ll> q;

void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        q.push(-1 * a);
    }
    ans = 0;
    while (1) {
        ll x = q.top();
        q.pop();
        x += q.top();
        q.pop();
        ans += x;
        if (q.empty()) break;
        q.push(x);
    }
    cout << abs(ans) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}