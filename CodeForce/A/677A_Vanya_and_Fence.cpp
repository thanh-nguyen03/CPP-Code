#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int n, h;
    cin >> n >> h;
    int a[n], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > h) sum += 2;
        else sum ++;
    }
    cout << sum;
}