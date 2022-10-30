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

string s;
int n;
void run_test_case() {
    cin >> n;
    cin >> s;
    map<char, int> cnt;
    int maxx = 0;
    for (auto i:s) {
        cnt[i]++;
        maxx = max(maxx, cnt[i]);
    }
    if (maxx > (s.size() + n - 1) / n) {
        cout << -1 << endl;
    }
    else cout << 1 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}