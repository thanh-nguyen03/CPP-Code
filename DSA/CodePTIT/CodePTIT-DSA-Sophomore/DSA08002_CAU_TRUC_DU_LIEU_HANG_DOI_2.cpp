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

queue<int> q;
string s;
int n;
void run_test_case() {
    cin >> s;
    if (s == "PUSH") {
        cin >> n;
        q.push(n);
    }
    else if (s == "POP") {
        if (!q.empty()) q.pop();
    }
    else if (s == "PRINTFRONT") {
        if (q.empty()) cout << "NONE" << endl;
        else cout << q.front() << endl;
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}