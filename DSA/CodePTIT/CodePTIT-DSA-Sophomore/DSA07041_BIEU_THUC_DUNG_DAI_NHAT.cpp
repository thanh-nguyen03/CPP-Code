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
    stack<char> st;
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (!st.empty() && s[i] == ')' && st.top() == '(') {
            ans += 2;
            st.pop();
        }
        else st.push(s[i]);
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}