#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	int temp;
    int change = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
                change = 1;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

        if (change) {
            printf("Step %d: ", i + 1);
            for (int j = 0; j < n; j++) printf("%d ", arr[j]);
            printf("\n");
        }
        change = 0;
	}
	
}


