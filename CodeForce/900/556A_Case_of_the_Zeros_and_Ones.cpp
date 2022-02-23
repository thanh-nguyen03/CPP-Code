#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count0 = 0, count1 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') count0++;
        else count1++;
    }
    int min = count0 < count1 ? count0 : count1;
    cout << n - (min)*2;
}