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
#define tester() int t; cin >> t; cin.ignore(); while(t--)
#define MAX 1000000

string s;
void run_test_case() {
    getline(cin, s);
    stack<pair<char, int>> st;
    int curr = 1;
    vi ans;
    for (auto i:s) {
        if (i == '(') {
            ans.pb(curr);
            st.push(make_pair(i, curr++));
        }
        else if (i == ')') {
            ans.pb(st.top().second);
            st.pop();
        }
    }
    for (auto i:ans) cout << i << " ";
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}