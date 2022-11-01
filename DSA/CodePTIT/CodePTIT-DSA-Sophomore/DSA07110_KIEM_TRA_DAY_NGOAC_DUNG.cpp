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
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        }
        else {
            if (st.empty()) continue;
            if (s[i] == ')' and st.top() == '(') st.pop();
            if (s[i] == ']' and st.top() == '[') st.pop();
            if (s[i] == '}' and st.top() == '{') st.pop();
        }
    }
    if (st.empty()) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    faster();
    tester() 
        run_test_case();
}