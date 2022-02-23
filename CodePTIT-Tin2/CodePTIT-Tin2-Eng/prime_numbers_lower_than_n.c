#include <stdio.h>
#include <math.h>
int main () {
	int n; scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		int flag = 1;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag) printf("%d\n", i);
	}
}

