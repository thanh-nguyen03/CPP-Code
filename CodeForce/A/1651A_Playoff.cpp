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



int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << (ll)pow(2, n) - 1 << endl;
    }
}