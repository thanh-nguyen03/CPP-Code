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
    stack<int> st;
    int dis = 100;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ')') {
            int a = i - st.top();
            if (a == dis + 2 || a <= 2) {
                cout << "Yes\n";
                return;
            }
            st.pop();
            dis = a;
        }
        else if (s[i] == '(') {
            st.push(i);
        }
    }
    cout << "No\n";
}

int main() {
    faster();
    tester() 
        run_test_case();
}