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
    bool hate = true;
    while (n--) {
        if (hate) cout << "I hate ";
        else cout << "I love ";
        if (n != 0) cout << "that ";
        hate = !hate;
    }
    cout << "it";
}