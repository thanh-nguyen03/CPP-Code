#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int n, a[10000000];
void run_test_case() {
    cin >> n;
    int max = 0;
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
    	if (a[i] > max) max = a[i];
	}
	cout << max << endl;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}
