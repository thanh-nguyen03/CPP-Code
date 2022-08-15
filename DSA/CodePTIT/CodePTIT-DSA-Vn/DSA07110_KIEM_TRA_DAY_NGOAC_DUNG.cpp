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
void run_test_case() {
    stack<char> st;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        switch (s[i]) {
            case '(': st.push(')');
                break;
            case '[': st.push(']');
                break;
            case '{': st.push('}');
                break;
            default:
                if (st.empty()) {
                    cout << "NO" << endl;
                    return;
                }
                if (s[i] != st.top()) {
                    cout << "NO" << endl;
                    return;
                }
                st.pop();
                break;
        }
    }
    if (st.empty()) {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}