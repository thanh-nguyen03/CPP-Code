#include <stdio.h>
#include <math.h>
int main(){
	int n, sum = 1;
	scanf("%d", &n);
	
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			int q = n / i;
			if (i == q) sum += i;
			else sum += i + q;
		}
	}
	
	n == sum ? printf("1") : printf("0");
}


