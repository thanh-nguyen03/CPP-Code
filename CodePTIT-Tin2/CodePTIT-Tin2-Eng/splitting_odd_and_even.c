#include <stdio.h>
int main() {
	int n; scanf("%d", &n);
	int arr[n + 10];
	int even[n], even_count = 0, odd[n], odd_count = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] % 2 == 0) even[even_count++] = arr[i];
		else odd[odd_count++] = arr[i];
	}
	for (int i = 0; i < even_count; i++) printf("%d ", even[i]);
	printf("\n");
	for (int i = 0; i < odd_count; i++) printf("%d ", odd[i]);
}

