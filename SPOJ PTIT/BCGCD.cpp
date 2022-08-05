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

ll bcnn(ll a, ll b) {
    return a * b / __gcd(a, b);
}

int main() {
    ll a, b;
    cin >> a >> b;
    while (a != 0 && b != 0) {
        cout << __gcd(a, b) << " " << bcnn(a, b) << endl;
        cin >> a >> b;
    }
}