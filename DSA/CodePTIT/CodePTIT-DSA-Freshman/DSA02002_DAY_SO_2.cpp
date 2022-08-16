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

int a, n;

stack<vector<int>> st;

void output() {
    while (!st.empty()) {
        cout << "[";
        for (int i = 0; i < st.top().size() - 1; i++) {
            cout << st.top()[i] << " ";
        }
        cout << st.top().back() << "] ";
        st.pop();
    }
    cout << endl;
}

void solve(vector<int> x) {
    if (x.size() == 1) {
        output();
        return;
    }
    vector<int> tmp;
    for (int i = 0; i < x.size() - 1; i++) {
        tmp.pb(x[i] + x[i + 1]);
    }
    st.push(tmp);
    solve(tmp);
}

void run_test_case() {
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++) {
        cin >> a;
        x.pb(a);
    }
    st.push(x);
    solve(x);
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}