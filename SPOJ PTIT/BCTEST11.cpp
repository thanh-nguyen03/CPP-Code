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
    queue<int> q;
    q.push(4);

    int tmp = n, check = 1;
    while (tmp) {
        int t = tmp % 10;
        if (t != 4 && t != 7) {
            check = 0;
            break;
        }
        tmp /= 10;
    }
    
    if (check) {
        cout << "YES";
        return;
    }

    while (n % q.front() != 0) {
        int t = q.front();
        q.pop();
        if (t > n / 2) {
            cout << "NO";
            return;
        }
        q.push(t*10 + 4);
        q.push(t*10 + 7);
    }
    cout << "YES";
}

int main() {
    faster();
        run_test_case();
}