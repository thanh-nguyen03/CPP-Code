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

string s;
int n;
vector<int> st;

void output() {
    for (auto x : st) cout << x << " ";
    cout << endl;
}

void solve() {
    if (s == "push") {
        cin >> n;
        st.pb(n);
    }
    else if (s == "pop") st.pop_back();
    else if (s == "show") {
        if (st.empty()) cout << "empty" << endl;
        else output();
    }
}

int main() {
    while (cin >> s) {
        solve();
    }
}