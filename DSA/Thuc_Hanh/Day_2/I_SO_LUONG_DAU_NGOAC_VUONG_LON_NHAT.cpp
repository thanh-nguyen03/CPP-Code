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
    int cnt = 0, res = 0;
    stack<pair<char, int>> st;
    st.push(make_pair('*', 0));
    for(char &i : s)
    {
        if(st.size() and ((i == ')' and st.top().first == '(') or (i == ']' and  st.top().first == '[')))
        {
            st.pop();
            if(st.size())
                res = max(res, cnt - st.top().second);
        }
        else
        {
            cnt += i == '[';
            st.push(make_pair(i, cnt));
        }
    }
    cout << res;
}

int main() {
    faster();
        run_test_case();
}