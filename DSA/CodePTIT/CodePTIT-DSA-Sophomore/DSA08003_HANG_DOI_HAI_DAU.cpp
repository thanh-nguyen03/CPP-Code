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
int n;
deque<int> q;
void run_test_case() {
    cin >> s;
    if (s == "PUSHBACK") {
        cin >> n;
        q.push_back(n);
    }
    else if (s == "PUSHFRONT") {
        cin >> n;
        q.push_front(n);
    }
    else if (s == "PRINTFRONT") {
        if (!q.empty()) cout << q.front() << endl;
        else cout << "NONE" << endl;
    }
    else if (s == "PRINTBACK") {
        if (!q.empty()) cout << q.back() << endl;
        else cout << "NONE" << endl;
    }
    else if (s == "POPFRONT") {
        if (!q.empty()) q.pop_front();
    }
    else if (s == "POPBACK") {
        if (!q.empty()) q.pop_back();
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}