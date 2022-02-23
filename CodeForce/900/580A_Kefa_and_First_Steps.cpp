#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    int a[n], curr = 1, max = 1;
    cin >> a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i] >= a[i - 1]) {
            curr++;
            if (curr > max) max = curr;
        }
        else curr = 1;
    }
    cout << max;
}