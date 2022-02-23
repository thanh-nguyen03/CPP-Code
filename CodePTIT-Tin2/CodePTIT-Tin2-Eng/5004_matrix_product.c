#include <stdio.h>

int main() {
	int n, m, p;
	scanf("%d%d%d", &n, &m, &p);
	int a[n][m], b[m][p];
	
	// Nhap ma tran
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
	        scanf("%d", &a[i][j]);
	    }
	}
	for (int i = 0; i < m; i++) {
	    for (int j = 0; j < p; j++) {
	        scanf("%d", &b[i][j]);
	    }
	}
	
	int c[60][60] = {0};
	// Tinh tich
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < p; j++) {
	        for (int k = 0; k < m; k++) {
	            c[i][j] += a[i][k] * b[k][j];
	        }
	    }
	}

    // In ma tran ket qua
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
