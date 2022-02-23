#include <stdio.h>
#include <math.h>
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		int flag = 1; 
		if (n < 2) flag = 0;
		else {
			for (int i = 2; i < sqrt(n); i++) {
				if (n % i == 0) {
					flag = 0;
					break;
				}
			}
		}
		flag == 1 ? printf("YES\n") : printf("NO\n");
	}
}

