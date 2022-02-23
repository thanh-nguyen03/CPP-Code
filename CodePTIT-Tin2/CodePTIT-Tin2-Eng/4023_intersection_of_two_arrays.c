#include <stdio.h>

int main(){
	int m; scanf("%d", &m);
	int n; scanf("%d", &n);
	int a[m];
	for (int i = 0; i < m; i++) scanf("%d", &a[i]);
	
	int b[n];
	int mark[1000] = {0};
	for (int i = 0; i < n; i++) {
		scanf("%d", &b[i]);
		mark[b[i]]++;
	}
	
    int c[1000];
    int k = 0;
	for (int i = 0; i < m; i++) {
		if (mark[a[i]] != 0) {
			c[k++] = a[i];
		}
	}

    for (int i = 0; i < k; i++) {
        // Find the index of the min element in the between arr[i+1] and arr[n-1] in the array
        int minIndex = i;
        for (int j = i + 1; j < k; j++) {
            if (c[j] < c[minIndex]) minIndex = j;
        }
        
        // Interchange arr[minIndex] and arr[i]
        int temp = c[i];
        c[i] = c[minIndex];
        c[minIndex] = temp;
	}
	
	// Print the sorted array
    int p[10000] = {0};
	for (int i = 0; i < k; i++) {
        p[c[i]]++;
        if (p[c[i]] == 1) printf("%d ", c[i]);
    }
}
