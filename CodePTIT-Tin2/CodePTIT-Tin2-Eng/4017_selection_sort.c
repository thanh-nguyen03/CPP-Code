#include <stdio.h>
int main() {
	int n; scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	for (int i = 0; i < n - 1; i++) {
		// Find the index of the min element in the between arr[i+1] and arr[n-1] in the array
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) minIndex = j;
		}
		
		// Interchange arr[minIndex] and arr[i]
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;

        printf("Step %d: ", i + 1);
	    for (int j = 0; j < n; j++) printf("%d ", arr[j]);
        printf("\n");
	}
	
}
