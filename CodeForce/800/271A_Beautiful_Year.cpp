#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

bool check(int n) {
    int a = n % 10;
    int b = n / 10 % 10;
    int c = n / 100 % 10;
    int d = n / 1000;
    if (a != b && a != c && a != d && b != c && b != d && c != d) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    while (true) {
        n++;
        if (check(n)) {
            cout << n;
            break;
        }
    }
}