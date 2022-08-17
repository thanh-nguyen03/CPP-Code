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

list<int> a;
int n, k;
void run_test_case() {
    cin >> n;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.pb(tmp);
    }
    cin >> k;
    a.remove(k);
    for (auto i:a) {
        cout << i << " ";
    }
}

int main() {
    faster();
        run_test_case();
}