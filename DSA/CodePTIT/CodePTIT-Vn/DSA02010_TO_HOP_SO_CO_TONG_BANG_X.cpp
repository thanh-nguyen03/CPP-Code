#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

int n, x, b, sum = 0;
bool flag = 0;
vector<int> a, back;
void init() {
    cin >> n >> x;
    sum = 0;
    a.clear();
    back.clear();
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> b;
        s.insert(b);
    }
    for (auto i : s) a.pb(i);
}

void output() {
    cout << "[";
    for (int i = 0; i < back.size() - 1; i++) cout << back[i] << " ";
    cout << back.back() << "]";
}

void backtrack(int i) {
    for (int j = i; j < n; j++) {
        sum += a[j];
        back.pb(a[j]);
        if (sum == x) {
            flag = 1;
            output();
        }
        else if (sum < x && i < n) backtrack(j);
        sum -= a[j];
        back.pop_back();
    }
}

void run_test_case() {
    init();
    backtrack(0);
    if (!flag) {
        cout << -1 << endl;
        return;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}