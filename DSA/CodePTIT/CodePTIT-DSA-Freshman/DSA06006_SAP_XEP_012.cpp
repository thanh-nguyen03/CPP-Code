#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back
#define all(x) x.begin(), x.end()
#define tester() int t; cin >> t; while(t--)

int n, a;
void run_test_case() {
    cin >> n;
    int o = 0, z = 0, tw = 0;
    while (n--) {
        cin >> a;
        if (a == 0) z++;
        else if (a == 1) o++;
        else tw++;
    }
    while (z--) cout << 0 << " ";
    while (o--) cout << 1 << " ";
    while (tw--) cout << 2 << " ";
    cout << endl;
}

int main() {
    tester() 
        run_test_case();
}