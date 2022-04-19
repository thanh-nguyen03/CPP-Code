#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define all(x) x.begin(), x.end()
#define tester() int t; cin >> t; while(t--)

string s;
void run_test_case() {
    scanf("\n");
    getline(cin, s);
    stringstream ss(s);
    string token;
    stack<string> st;
    while (ss >> token) {
        st.push(token);
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    tester()
        run_test_case();
}