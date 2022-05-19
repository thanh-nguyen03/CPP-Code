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

int sumDigit(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int n;
void run_test_case() {
    cin >> n;
    int sum1 = sumDigit(n), sum2 = 0, tmp = n;

    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            n /= i;
            sum2 += sumDigit(i);
        }
    }
    if (n > 1) sum2 += sumDigit(n);
    if (sum1 == sum2) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    faster();
        run_test_case();
}