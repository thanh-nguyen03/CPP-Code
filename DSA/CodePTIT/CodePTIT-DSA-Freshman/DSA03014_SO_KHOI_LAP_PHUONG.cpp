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

ll n;
vector<string> cube;
void makeCube() {
    cube.clear();
    for (ll i = 1; i <= 1000; i++) {
        cube.pb(to_string(i * i * i));
    }
    reverse(cube.begin(), cube.end());
}

void run_test_case() {
    cin >> n;
    string s = to_string(n);
    for (int i = 0; i < cube.size(); i++) {
        string curr = cube[i];
        if (curr.size() > s.size()) continue;
        int count = 0;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == curr[count]) count++;
        }
        if (curr.size() == count) {
            cout << curr << endl;
            return;
        }
    }
    cout << "-1\n";
}


int main() {
    makeCube();
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}