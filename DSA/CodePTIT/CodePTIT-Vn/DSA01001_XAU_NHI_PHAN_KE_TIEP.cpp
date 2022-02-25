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

string s;
void run_test_case() {
    cin >> s;
    int idx = s.size() - 1;
    while (s[idx] == '1') idx--;
    if (idx > 0) s[idx] = '1';
    for (int i = idx + 1; i < s.size(); i++) s[i] = '0';
    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}