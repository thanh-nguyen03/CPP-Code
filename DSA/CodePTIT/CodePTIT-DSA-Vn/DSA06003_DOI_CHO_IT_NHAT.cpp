#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define pb push_back

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int n, a[10000];
void run_test_case() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        int idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[idx] > a[j]) idx = j;
        }
        if (idx != i) {
            swap(&a[i], &a[idx]);
            count++;
        }
    }
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        run_test_case();
}