#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	int temp;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}

        if (i != n - 1) {
            printf("Step %d: ", i + 1);
            for (int j = 0; j < n; j++) printf("%d ", arr[j]);
            printf("\n");
        }
	}
	
}


