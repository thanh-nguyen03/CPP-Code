#include <iostream>
using namespace std;

typedef long long ll;
typedef double db;

int main() {
    int n;
    cin >> n;
    if (n <= 2) cout << "NO";
    else {
        if (n % 2 == 0) cout << "YES";
        else cout << "NO";
    }
}