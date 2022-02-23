#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int s[1000100] = {0};
int main() {
    // Sang nguyen to
    s[0] = 1; s[1] = 1;
	for (int i = 2; i <= 1000; i++) {
		if (s[i] == 0) {
			for (int j = i*i; j <= 1000000; j += i) {
				s[j] = 1;
			}
		}
	}
    
    int t;
    scanf("%d\n", &t);
    while (t--) {
        ll l, r;
        scanf("%lld%lld", &l, &r);
        ll a = sqrt(l), b = sqrt(r);
        int count = 0;
        if (a % 2 == 0) a--;
        if (a < 2) count++;
        for (ll i = a; i <= b; i += 2) {
            if (s[i] == 0) count++;
        }
        printf("%d\n", count);
    }
}