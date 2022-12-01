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

int check(string s) {
    int flag = 0;
    for (auto i:s) {
        if (i >= '0' && i <= '9') {
            flag = 1;
        }
        else return 0;
    }
    return flag;
}

string s;
void run_test_case() {
    cin >> s;
    stack<string> st;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            string tmp = string(1, s[i]);
            while (s[i+1] >= '0' and s[i+1] <= '9' && i < n - 1) {
                tmp += string(1, s[i+1]);
                i++;
            }
            st.push(tmp);
        }
        else if (s[i] == ']') {
            string tmp = "";
            while (st.top() != "[") {
                // cout << st.top() << "-";
                tmp = st.top() + tmp;
                st.pop();
            }
            st.pop();
            ll k = 0;
            if (!st.empty() && check(st.top())) {
                k = stoll(st.top());
                st.pop();
            } 
            else k = 1;
            string b = "";
            for (int j = 0; j < k; j++) {
                b += tmp;
            }
            // cout << b << "-";
            st.push(b);
        }
        else st.push(string(1, s[i]));
    }
    string ans = "";
    while (!st.empty()) {
        ans = st.top() + ans;
        st.pop();
    }
    cout << ans << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}