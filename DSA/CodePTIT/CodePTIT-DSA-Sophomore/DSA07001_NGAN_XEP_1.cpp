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
vi st;
void solve(string s) {
    if (s == "push") {
        cin >> n;
        st.pb(n);
    }
    else if (s == "pop") st.pop_back();
    else {
        if (st.size() == 0) {
            cout << "empty" << endl;
            return;
        }
        for (auto i:st) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    string s;
    while (cin >> s) solve(s);
}