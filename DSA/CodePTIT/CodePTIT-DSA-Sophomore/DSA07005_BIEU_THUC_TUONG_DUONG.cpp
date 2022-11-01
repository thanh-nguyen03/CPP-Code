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
        if (s[i] == '(' && i >= 1) {
            char x = s[i-1];
            if (x == '+' || x == '-') st.push(x);
            if (x == '(' && !st.empty()) st.push(st.top());
        }
        if (!st.empty() && st.top() == '-') {
            if (s[i] == '-') s[i] = '+';
            else if (s[i] == '+') s[i] = '-';
        }
        if (s[i] == ')' && !st.empty()) st.pop();
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '(' && s[i] != ')') cout << s[i];
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}