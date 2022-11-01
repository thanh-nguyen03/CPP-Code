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
string oper = "+-*/^%";
string s;
void run_test_case() {
    cin >> s;
    stack<int> st;
    for (auto i:s) {
        if (find(all(oper), i) != oper.end()) {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            if (i == '+') st.push(a + b);
            if (i == '-') st.push(b-a);
            if (i == '*') st.push(a * b);
            if (i == '/') st.push(b / a);

            // cout << st.top() << endl;
        }
        else st.push(i - '0');
    }
    cout << st.top() << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}