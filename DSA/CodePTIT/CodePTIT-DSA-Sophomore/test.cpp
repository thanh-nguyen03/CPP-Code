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

void backtrack(int pos, string s) {
  if (pos == 0) {
    cout << s << endl;
  }
  else {
    backtrack(pos - 1, s + "1"); // xong 
    backtrack(pos - 1, s + "0");
  }
}

int n;
void run_test_case() {
  cin >> n;
  backtrack(n, "");
}

int main() {
    faster();
    tester() 
        run_test_case();
}