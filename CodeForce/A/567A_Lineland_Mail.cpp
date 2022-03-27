#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << a[1] - a[0] << " " << a[n - 1] - a[0] << endl;
    for (int i = 1; i < n - 1; i++) {
        if (a[i] - a[i - 1] < a[i + 1] - a[i]) {
            cout << a[i] - a[i - 1] << " ";
        }
        else {
            cout << a[i + 1] - a[i] << " ";
        }
        if (a[i] - a[0] < a[n - 1] - a[i]) {
            cout << a[n - 1] - a[i] << endl;
        } 
        else {
            cout << a[i] - a[0] << endl;
        }
    }
    cout << a[n - 1] - a[n - 2] << " " << a[n - 1] - a[0];
}