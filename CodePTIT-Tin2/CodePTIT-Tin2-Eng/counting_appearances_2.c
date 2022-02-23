// #include <stdio.h>
// int main() {
// 	int n; scanf("%d", &n);
// 	int arr[n + 10];
// 	int b[100000] = {0};
	
// 	for (int i = 0; i < n; i++) {
// 		scanf("%d", &arr[i]);
// 		b[arr[i]]++;
// 	}
	
// 	for (int i = 0; i < n; i++) {
// 		if (b[arr[i]] != -1) {	
// 			printf("%d %d\n", arr[i], b[arr[i]]);
// 			b[arr[i]] = -1;
// 		}
// 	}
// }

#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;

int main() {
	int n;
	scanf("%d", &n);
	int a[n + 10], b[100000] = {0}; // a[i] <= 10^6

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		b[a[i]]++;
	}

	/*
		7
		2 3 3 2 1 9 5

		b[1] 1
		b[2] 2 -> -1
		b[3] 2 -> -1
		b[4] 0
		b[5] 1
		b[6] 0
		b[7] 0 
		b[8] 0
		b[9] 1

	*/

	

	for (int i = 0; i < n; i++) {
		if (b[a[i]] != -1) {
			printf("%d %d\n", a[i], b[a[i]]);
			b[a[i]] = -1;
		}
	}
}