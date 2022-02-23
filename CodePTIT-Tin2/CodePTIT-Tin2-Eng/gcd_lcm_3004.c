#include <stdio.h>



int main () {
	long long a, b; scanf("%lld%lld", &a, &b);
	long long ta = a;
	long long tb = b;
	long long p = ta * tb;
	a = a > b ? a : b;
	b = b < ta ? b : ta;
	
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	printf("%lld\n%lld", a, p / a);
}

