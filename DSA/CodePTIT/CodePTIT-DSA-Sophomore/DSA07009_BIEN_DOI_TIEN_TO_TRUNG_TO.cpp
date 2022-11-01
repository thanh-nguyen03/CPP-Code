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
    stack<string> st;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^' || s[i] == '%') {
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            string c = "(" + a + s[i] + b + ")";
            st.push(c);
        }
        else st.push(string(1, s[i]));
    }
    cout << st.top() << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}