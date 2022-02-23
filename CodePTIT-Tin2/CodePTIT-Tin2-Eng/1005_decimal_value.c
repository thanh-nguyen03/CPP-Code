#include <stdio.h>
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		double n; scanf("%lf", &n);
		printf("%.15lf\n", 1 / n);
	}
}

