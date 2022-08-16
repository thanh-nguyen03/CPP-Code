#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <cstring>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define tester() int t; cin >> t; while(t--)

string s1, s2;
void run_test_case() {
    cin >> s1 >> s2;
    int n = s1.length(), m = s2.length();
    int C[n + 1][m + 1] = {};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1]) C[i][j] = C[i - 1][j - 1] + 1;
            else {
                C[i][j] = max(C[i - 1][j], C[i][j - 1]);
            }
        } 
    }
    cout << C[n][m] << endl;
}

int main() {
    tester() run_test_case();
}