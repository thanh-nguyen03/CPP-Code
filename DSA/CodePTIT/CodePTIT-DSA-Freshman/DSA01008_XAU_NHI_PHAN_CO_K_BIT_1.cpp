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
int n, k;

void backtrack(int one, int zero, string s) {
    if (one == 0) {
        for (int i = 0; i < zero; i++) s += '0';
        cout << s << endl;
        return;
    }
    else if (zero == 0) {
        for (int i = 0; i < one; i++) s += '1';
        cout << s << endl;
        return;
    }
    else {
        backtrack(one, zero - 1, s + '0');
        backtrack(one - 1, zero, s + '1');
    }
}

void run_test_case() {
    cin >> n >> k;
    backtrack(k, n - k, "");
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}