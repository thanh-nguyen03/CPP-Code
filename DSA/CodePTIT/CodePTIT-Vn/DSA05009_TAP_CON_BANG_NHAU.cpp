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

int a[1000], n, sum = 0, goal, curr = 0;
vector<int> x;
bool check = true, stop = false;

void init() {
    check = true;
    stop = false;
    cin >> n;
    a[0] = 0;
    sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 != 0) {
        check = false;
        return;
    }
    goal = sum / 2;
    x.clear();
    curr = 0;
}

void backtrack(int i) {
    for (int j = i + 1; j <= n; j++) {
        if (stop) return;
        curr += a[j];
        if (curr == goal) {
            stop = true;
            return;
        }
        if (curr < goal)
            backtrack(j);
        curr -= a[j];
    }
}

void run_test_case() {
    init();
    if (!check) {
        cout << "NO" << endl;
        return;
    }
    backtrack(0);
    if (stop) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();    
}