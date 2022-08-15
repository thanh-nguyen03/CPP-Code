#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

vector <vector <ll> > C (1005, vector<ll> (1005, 1));
vector <ll> P(1005, 1);
int n, k;

void init() {
    for (int i = 1; i <= 1000; i++) {
        P[i] = P[i - 1] * i % mod;
    }
}
void chinhhop () {
    for (int i = 1; i <= 1000; i++) 
        for (int j = 1; j < i; j++) 
            C[i][j] *= (C[i-1][j] + C[i-1][j-1]) % mod;
}

void run_test_case() {
    cin >> n >> k;
    cout << C[n][k] * P[k] % mod << endl;
}

int main() {
    chinhhop();
    init();
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}