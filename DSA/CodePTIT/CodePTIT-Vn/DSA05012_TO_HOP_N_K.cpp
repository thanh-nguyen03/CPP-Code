#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <cstring>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define all(x) x.begin(), x.end()
#define tester() int t; cin >> t; while(t--)

vector<vector<ll>> C(1005, vector<ll> (1005, 1));

void ToHop() {
    for (int i = 1; i < 1000; i++) {
        for (int j = 1; j < i; j++) {
            C[i][j] *= (C[i - 1][j] + C[i - 1][j - 1]) % mod;
        }
    }
}

int n, k;
void run_test_case() {
    cin >> n >> k;
    cout << C[n][k] << endl;
}

int main() {
    ToHop();
    tester() run_test_case();
}