#include <stdio.h>
int main() {
	int a, b; scanf("%d%d", &a, &b);
	if (b != 0)
		printf("%d %d %lld %.2f %d", a + b, a - b, (long long)a*b, (float)a/b, a % b);
	else printf("%d", 0);
}

