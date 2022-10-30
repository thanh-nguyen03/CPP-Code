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
stack<int> st;
void solve(string s) {
    if (s == "PUSH") {
        cin >> n;
        st.push(n);
    }
    else if (s == "POP" && !st.empty()) {
        st.pop();
    }
    else if (s == "PRINT") {
        if (st.empty()) {
            cout << "NONE" << endl;
            return;
        }
        cout << st.top() << endl;
    }
}

int main() {
    int t;
    cin >> t;
    string s;
    while (t--) {
        cin >> s; 
        solve(s);
    }
}