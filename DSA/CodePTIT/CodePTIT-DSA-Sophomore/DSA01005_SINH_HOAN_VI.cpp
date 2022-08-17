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

int n;
vi a, vs;
void init() {
    cin >> n;
    a.resize(n, 0);
    vs.resize(n + 1, 0);
}

void output() {
    for (auto i:a) {
        cout << i;
    }
    cout << " ";
}

void backtrack(int i) {
    for (int j = 1; j <= n; j++) {
        if (!vs[j]) {
            a[i] = j;
            vs[j] = 1;
            if (i == n - 1) output();
            else backtrack(i + 1);
            vs[j] = 0;
        }
    }
}

void run_test_case() {
    init();
    backtrack(0);
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}