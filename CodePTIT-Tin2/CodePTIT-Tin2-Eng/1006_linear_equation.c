#include <stdio.h>
int main() {
	double a, b; scanf("%lf%lf", &a, &b);
	if (a == b && a == 0) printf("Infinite solutions");
	else if (a == 0) printf("No solution");
	else printf("%.2lf", (-b) / (a));
}

