#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    string a , b;
    int count = 0;
    while (n--) {
        b = a;
        cin >> a;
        if (b != a) count++;
    }
    cout << count;
}