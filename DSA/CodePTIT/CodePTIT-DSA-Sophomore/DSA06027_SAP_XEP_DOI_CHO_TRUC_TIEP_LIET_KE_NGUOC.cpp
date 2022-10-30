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
void run_test_case() {
    vector<string> ans;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int buoc = 0;
    for (int i = 0; i < n - 1; i++) {
        int check = 0;
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
                check = 1;
            }
        }
        if (check) {
            string s;
            s += "Buoc " + to_string(++buoc) + ": ";
            for (int k = 0; k < n; k++) {
                s += to_string(a[k]) + " ";
            }
            ans.pb(s);
        }
    }
    reverse(all(ans));
    for (auto i:ans) {
        cout << i << endl;
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}