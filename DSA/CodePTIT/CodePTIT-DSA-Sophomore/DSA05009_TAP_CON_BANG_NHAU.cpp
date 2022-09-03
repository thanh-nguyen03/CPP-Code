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

int n, a[MAX];
ll s = 0, goal = 0, curr = 0;
int check = 1, stop = 0;
void init() {
    cin >> n;
    check = 1;
    s = 0;
    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s += a[i];
    }
    if (s&1) {
        check = 0;
        return;
    }
    goal = s / 2;
    curr = 0;
}

void backtrack(int i) {
    for (int j = i + 1; j < n; j++) {
        if (stop) return;
        curr += a[j];
        if (curr == goal) {
            stop = 1;
        }
        else if (curr < goal) backtrack(j);
        curr -= a[j];
    }
}

void run_test_case() {
    init();
    if (!check) {
        cout << "NO" << endl;
        return;
    }
    backtrack(0);
    if (stop) {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}