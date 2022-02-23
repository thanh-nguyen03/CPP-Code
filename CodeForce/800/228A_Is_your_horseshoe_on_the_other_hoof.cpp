#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    set<int> s;
    int a;
    for (int i = 0; i < 4; i++) {
        cin >> a;
        s.insert(a);
    }
    cout << 4 - s.size();
}