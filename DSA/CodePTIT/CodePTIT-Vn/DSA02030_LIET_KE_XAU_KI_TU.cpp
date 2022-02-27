#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

char a;
int n, k;
vector<int> x;
string s;

void init() {
    s.clear();
    x.clear();
    cin >> a >> k;
    for (char i = 'A'; i <= a; i++) s.pb(i);
    x.resize(k + 1, 0);
    n = s.size();
    for (int i = 0; i < k; i++) x[i] = i + 1;
}

void output() {
    for (int i = 1; i <= k; i++) cout << s[x[i] - 1];
    cout << endl;
}

void backtrack(int i) {
    for (int j = x[i - 1]; j <= n; j++) {
        x[i] = j;
        if (i == k) output();
        else backtrack(i + 1);
    }
}

int main() {
    init();
    backtrack(1);
}