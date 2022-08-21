#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)
#define MAX 1000000

int n;
void run_test_case() {
    cin >> n;
    int a = 0, b = 0, c = 0;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp == 0) a++;
        else if (tmp == 1) b++;
        else if (tmp == 2) c++;
    }
    while (a--) cout << 0 << " ";
    while (b--) cout << 1 << " ";
    while (c--) cout << 2 << " ";
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}