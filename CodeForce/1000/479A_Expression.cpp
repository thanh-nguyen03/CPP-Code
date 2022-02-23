#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main() {
    fastread();
    int a, b, c, ans;
    cin >> a >> b >> c;
    ans = a + b + c;
    ans = max(ans,(a * b * c));
    ans = max(ans,(a +b) * c);
    ans = max(ans,a *(b + c));
    ans = max(ans,a +(b * c));
    ans = max(ans,(a * b) + c);
    
    cout << ans;
}