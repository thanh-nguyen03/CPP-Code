#include <stdio.h>
#include <math.h>
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int a, b; scanf("%d%d", &a, &b);
		int t = a;
		a = (a + b + abs(a - b)) / 2;
		b = (t + b - abs(t - b)) / 2;
		
		int temp;
		while (b != 0) {
			temp = a % b;
			a = b;
			b = temp;
		}
		
		printf("%d\n", a);
	}
}

