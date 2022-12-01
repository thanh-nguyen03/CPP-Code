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


void run_test_case() {
    int ans = 0;
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= 5; j++) {
            for (int k = 0; k <= 5; k++) {
                for (int a = 0; a <= 5; a++) {
                    if (i + j + k + a == 5) ans++;
                }
            }
        }
    }
    cout << ans;
}

int main() {
    faster();
    tester() 
        run_test_case();
}