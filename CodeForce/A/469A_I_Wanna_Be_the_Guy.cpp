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
    int n;
    cin >> n;
    set<int> s;
    int p, q, a;
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> a;
        s.insert(a);
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> a;
        s.insert(a);
    }
    if (s.size() == n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}