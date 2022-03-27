#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <string>
#include <utility>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

int s, n, x, y;
bool flag = true;
multiset<pair<int, int>> st;

int main() {
    cin >> s >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        st.insert(make_pair(x, y));
    }
    for (auto p : st) {
        if (s > p.first) s += p.second;
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}