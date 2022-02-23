#include <iostream>
#include <math.h>
#include <string>
using namespace std;

typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; m*i <= n; i++) n++;
    cout << n;
}