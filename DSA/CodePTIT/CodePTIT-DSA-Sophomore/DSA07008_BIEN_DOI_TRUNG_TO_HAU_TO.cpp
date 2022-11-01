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

int check(char a) {
    if (a == '^') return 4;
    if (a == '*' || a == '/') return 3;
    if (a == '+' || a == '-') return 2;
    return 1;
}

string oper = "+-*/^";
string s;
void run_test_case() {
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push(s[i]);
        }
        else if (s[i] == ')') {
            while (st.top() != '(') {
                cout << st.top();
                st.pop();
            }
            st.pop();
        }
        else if (find(all(oper), s[i]) != oper.end()) {
            while (!st.empty() && check(s[i]) <= check(st.top())) {
                cout << st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        else cout << s[i];
    }

    while (!st.empty()) {
        if (st.top() != '(') {
            cout << st.top();
        }
        st.pop();
    }
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}