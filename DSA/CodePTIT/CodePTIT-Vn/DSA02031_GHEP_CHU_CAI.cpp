#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

vector<int> x;
int n, chuaxet[15];
char a;
string s, tmp;

void init() {
    cin >> a;
    for (char i = 'A'; i <= a; i++) s.pb(i);
    n = s.size();
    x.resize(n);
    memset(chuaxet, 1, sizeof(chuaxet));
}

bool check(string a) {
    for (int i = 1; i < a.size() - 1; i++) {
        if (a[i] == 'A' || a[i] == 'E') {
            if (a[i - 1] != 'A' &&  a[i - 1] != 'E' && a[i + 1] != 'A' && a[i + 1] != 'E') return 0;
        }
    }
    return 1;
}

void output() {
    for (int i = 0; i < n; i++) tmp.pb(s[x[i] - 1]);
    if (check(tmp)) cout << tmp << endl;
    tmp = "";
}

void backtrack(int i) {
    for (int j = 1; j <= n; j++) {
        if (chuaxet[j]) {
            x[i] = j;
            chuaxet[j] = 0;
            if (i == n - 1) output();
            else backtrack(i + 1);
            chuaxet[j] = 1;
        }
    }
}

int main() {
    init();
    backtrack(0);
}