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

int cnt = 0;
int n;
void backtrack(int pos, string s) {
    if (pos == 0) {
        cnt++;
        cout << s;
        if (cnt != pow(2, n)) cout << ",";
    }
    else {
        backtrack(pos - 1, s + "A");
        backtrack(pos - 1, s + "B");
    }
}

void run_test_case() {
    cin >> n;
    cnt = 0;
    backtrack(n, "");
    cout << endl;
}

int main() {
    faster();
    tester() 
        run_test_case();
}