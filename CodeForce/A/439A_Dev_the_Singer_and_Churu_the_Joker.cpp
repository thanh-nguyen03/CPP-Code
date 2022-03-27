#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    int n, d;
    cin >> n >> d;
    int a[n + 10];
    int jokeTime = (n - 1) * 10, singTime = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        singTime += a[i];
    }
    if (jokeTime + singTime > d) {
        cout << -1;
        return 0;
    }
    jokeTime += d - singTime - jokeTime;
    cout << jokeTime / 5;
}