#include <stdio.h>
#include <math.h>
int main() {
	int a, b; scanf("%d%d", &a, &b);
	int t = a;
	a = (a + b - abs(a - b)) / 2;
	b = (t + b + abs(t - b)) / 2;
	long long sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	printf("%d", sum);
}

