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

db a, b, c, d;
void run_test_case() {
    cin >> a >> b >> c >> d;
    cout << fixed << setprecision(4) << sqrt((a-c)*(a-c) + (b-d)*(b-d)) << endl;
}

int main() {
    // faster();
    tester() 
        run_test_case();
}