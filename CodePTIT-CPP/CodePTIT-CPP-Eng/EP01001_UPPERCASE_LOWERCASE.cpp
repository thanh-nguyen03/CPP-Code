#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

char a;
void run_test_case() {
    cin >> a;
    if (a >= 'A' && a <= 'Z') {
        a += 32;
    }
    else a -= 32;
    cout << a << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}