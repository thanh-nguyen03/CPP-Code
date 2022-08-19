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

string day[] = {"02", "20", "22"};
string month = "02";
vector<string> year;
vector<string> ans(3);
void genYear(int pos, string s) {
    if (pos == 0) {
        year.pb(s);
    }
    else {
        genYear(pos - 1, s + "0");
        genYear(pos - 1, s + "2");
    }
}

void solve() {
    ans[1] = month;
    for (auto i:day) {
        ans[0] = i;
        for (auto j:year) {
            ans[2] = j;
            cout << ans[0] << "/" << ans[1] << "/" << ans[2] << endl;
        }
    }
}

void run_test_case() {
    genYear(3, "2");
    solve();
}

int main() {
    faster();
        run_test_case();
}