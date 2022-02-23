#include <stdio.h>
#include <math.h>
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		double s = sqrt(n);
		(s == (int)s) ? printf("YES") : printf("NO");

		printf("\n");
	}
}

