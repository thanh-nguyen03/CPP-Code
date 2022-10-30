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
    queue<int> q;
    cin >> n;
    int s, a;
    while (n--) {
        cin >> s;
        switch (s) {
            case 1:
                cout << q.size() << endl;
                break;
            case 2:
                cout << (q.empty() ? "YES" : "NO") << endl;
                break;
            case 3:
                cin >> a;
                q.push(a);
                break;
            case 4:
                if (!q.empty()) q.pop();
                break;
            case 5:
                if (q.empty()) cout << "-1\n";
                else cout << q.front() << endl;
                break;
            case 6:
                if (q.empty()) cout << "-1\n";
                else cout << q.back() << endl;
                break;
        }
    }
}

int main() {
    faster();
    tester() 
        run_test_case();
}