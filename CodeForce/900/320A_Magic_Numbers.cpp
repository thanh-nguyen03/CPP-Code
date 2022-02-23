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
    int checkThree4 = 0;
    int lst;
    while (n) {
        lst = n % 10;
        if (lst != 4 && lst != 1) {
            cout << "NO";
            return 0;
        }
        if (lst == 4) {
            checkThree4++;
        }
        else checkThree4 = 0;
        if (checkThree4 == 3) {
            cout << "NO";
            return 0;
        }

        n /= 10;
    }
    if (lst == 4) {
        cout << "NO";
        return 0;
    }
    cout << "YES";
}