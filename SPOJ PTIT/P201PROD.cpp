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

int n;
void run_test_case() {
    cin >> n;
    int tmp = n;
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n -= 4;
    }
    string ans;
    ans.insert(ans.begin(), cnt, '8');
    ans.insert(ans.begin(), tmp - cnt, '9');
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}