#include <stdio.h>
#include <math.h>
int main() {
	int m, n; scanf("%d%d", &m, &n);
	int count = 0, arr[100000];
	for (int i = 1; i <= sqrt(n); i++) {
		if (i*i >= m)
			arr[count++] = i*i;
	}
	printf("%d\n", count);
	for (int i = 0; i < count; i++) printf("%d\n", arr[i]);
}

