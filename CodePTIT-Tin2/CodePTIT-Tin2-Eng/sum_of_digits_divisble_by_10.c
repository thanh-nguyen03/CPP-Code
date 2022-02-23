#include <stdio.h>

int check(int n) {
	int sum = 0;
	while (n) {
		int last = n % 10;
		sum += last;
		n /= 10;
	}
	
	return (sum % 10 == 0);
}

int main () {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		check(n) ? printf("YES\n") : printf("NO\n");  
	}
}

