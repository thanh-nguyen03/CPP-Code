#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

stack<int> st;
int n;
string s;
void solve() {
    cin >> s;
    if (s == "PUSH") {
        cin >> n;
        st.push(n);
    }
    else if (!st.empty() && s == "POP") {
        st.pop();
    }
    else if (s == "PRINT") {
        if (st.empty()) cout << "NONE" << endl;
        else cout << st.top() << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}