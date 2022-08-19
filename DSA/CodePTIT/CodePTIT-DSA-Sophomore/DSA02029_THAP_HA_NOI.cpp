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

void backtrack(int i, char a, char b, char c) {
    if (i == 1) {
        cout << a << " -> " << c << endl;
        return;
    }
    backtrack(i - 1, a, c, b);
    backtrack(1, a, b, c);
    backtrack(i - 1, b, a, c);
}

void run_test_case() {
    cin >> n;
    backtrack(n, 'A', 'B', 'C');
}

int main() {
    faster();
        run_test_case();
}