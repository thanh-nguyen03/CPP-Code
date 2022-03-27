#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

typedef long long ll;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int n;
    cin >> n;
    int a[n], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a + n, compare);
    int count = 0, curr = 0;
    for (int i = 0; i < n; i++) {
        if (curr <= sum / 2) {
            curr += a[i];
            count++;
        }
        else break;
    }
    cout << count;
}