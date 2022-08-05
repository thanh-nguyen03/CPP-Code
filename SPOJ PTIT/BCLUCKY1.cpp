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
void run_test_case() {
    cin >> s;
    int cnt = 0;
    for (auto i:s) {
        if (i == '4' || i == '7') cnt++;
    }
    
    while (cnt) {
        int t = cnt % 10;
        if (t != 4 && t != 7) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main() {
    faster();
        run_test_case();
}