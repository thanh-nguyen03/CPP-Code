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
    for (auto i:s) {
        if (!st.empty() && i == ')' && st.top() == '(') {
            st.pop();
        }
        else st.push(i);
    }
    int a = 0, b = 0;
    while (!st.empty()) {
        if (st.top() == '(') a++;
        else b++;
        st.pop();
    }
    cout << a/2 + b/2 + a%2 + b%2 << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}