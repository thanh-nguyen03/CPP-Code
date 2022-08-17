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

string s;
void run_test_case() {
    cin >> s;
    int i = s.size() - 1;
    while (s[i] == '1') i--;
    if (i < 0) {
        for (int j = 0; j < s.size(); j++) cout << 1;
        cout << endl;
        return;
    }
    s[i] = '1';
    for (int j = i + 1; j < s.size(); j++) s[j] = '0';
    cout << s << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}