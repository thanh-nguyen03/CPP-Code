#include<stdio.h>
#include<string.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[n][3];
	int one = 0, zero = 0, count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
			if (a[i][j] == 1) one++;
			else zero++;
		}

		if (one > zero) count++;
		one = 0; zero = 0;
	}

	printf("%d", count);
}