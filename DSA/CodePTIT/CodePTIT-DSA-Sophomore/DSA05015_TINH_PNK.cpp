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

vector<vll> C;
vll P;

void combination() {
    C.resize(1001, vll(1001, 1));
    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j < i; j++) {
            C[i][j] = (C[i-1][j-1] + C[i-1][j]) % mod;
        }
    }
}

void permutation() {
    P = {1, 1};
    for (int i = 2; i <= 1000; i++) {
        P.pb(P[i-1] * i % mod);
    }
}

int n, k;
void run_test_case() {
    cin >> n >> k;
    if (n < k) cout << "0\n";
    else if (n == k) cout << "1\n";
    else cout << C[n][k] * P[k] % mod << endl;
}

int main() {
    faster();
    combination();
    permutation();
    tester() 
        run_test_case();
}