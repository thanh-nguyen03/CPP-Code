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


int main() {
    int m = 2, n;
    cin >> n;
    cin.ignore();
    string s;
    while (n--) {
        getline(cin, s);
        if (s == "dung") {
            cout << 2 << endl;
        }
        if (s == "lon hon") cout << 1 << endl;
        if (s == "nho hon") cout << 3 << endl;
    }
}