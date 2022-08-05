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
int a[15], vs[15];
void init() {
    cin >> n;
    memset(vs, 0, sizeof(vs));
}

void output() {
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
    cout << endl;
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
}

int main() {
    faster();
        run_test_case();
}