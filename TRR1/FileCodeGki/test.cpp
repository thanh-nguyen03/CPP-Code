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
    int cnt = 0;
    for (int i = 0; i<= 15; i++) {
        for (int j = 2; j <= 15; j++) {
            for (int k = 0; k <= 15; k++) {
                for (int a = 3; a <= 15; a++) {
                    for (int b = 0; b <= 15; b++) {
                        for (int c = 1; c <= 15; c++) {
                            if (i + j + k + a + b + c == 15) cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
}

int main() {
    faster();
        run_test_case();
}