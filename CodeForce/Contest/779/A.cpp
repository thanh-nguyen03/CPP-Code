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
int n;
void run_test_case() {
    cin >> n >> s;
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '0' && s[i + 1] == '0') count += 2;
        if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') count++;
    }
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}