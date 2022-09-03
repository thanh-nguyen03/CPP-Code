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

string a, b;
void run_test_case() {
    cin >> a >> b;
    // Min
    replace(all(a), '6', '5');
    replace(all(b), '6', '5');

    cout << stoll(a) + stoll(b) << " ";

    // Max
    replace(all(a), '5', '6');
    replace(all(b), '5', '6');

    cout << stoll(a) + stoll(b);
}

int main() {
    faster();
        run_test_case();
}