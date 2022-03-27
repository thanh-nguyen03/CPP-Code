#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
 
typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
bool checkLucky(int n) {
    while (n > 0) {
        if (n % 10 != 4 && n % 10 != 7) return false;
        n /= 10;
    }
    return true;
}
 
 
int main() {
    fastread();
    int n;
    cin >> n;
    int a[n / 2], j = 0;
    for (int i = 1; i <= n; i++) {
        if (checkLucky(i)) {
            a[j++] = i;
        }
    }
 
    if (checkLucky(n) && n != 0) {
        cout << "YES";
        return 0;
    }
    else {
        for (int i = 0;i < j; i++) {
            if (n % a[i] == 0) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}