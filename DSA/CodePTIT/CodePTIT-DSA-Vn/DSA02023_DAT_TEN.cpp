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

vector<int> x;
vector<string> name;
int n, k;

void init() {
    cin >> n >> k;
    set<string> s;
    string a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        s.insert(a);
    }
    n = s.size();
    for (auto e : s) name.pb(e);
    x.resize(k + 1, 0);
    for (int i = 1; i <= k; i++) x[i] = i;
}

void output() {
    for (int i = 1; i <= k; i++) cout << name[x[i] - 1] << " ";
    cout << endl;
}

void backtrack(int i) {
    for (int j = x[i - 1] + 1; j <= n - k + i; j++) {
        x[i] = j;
        if (i == k) output();
        else backtrack(i + 1);
    }
}

void run_test_case() {
    init();
    backtrack(1);
}

int main() {
    run_test_case();
}