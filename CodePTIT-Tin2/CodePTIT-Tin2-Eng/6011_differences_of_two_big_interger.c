#include<stdio.h>
#include<string.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		scanf (" ");
		char a0[10000], b0[10000], a[10000]={}, b[10000]={};
		int s[10000]={0};
		gets (a0);
		for (int i=0; i<strlen(a0); i++) {
			a[i] = a0[strlen(a0)-1-i];
		}
		scanf (" ");
		gets (b0);
		for (int i=0; i<strlen(b0); i++) {
			b[i] = b0[strlen(b0)-1-i];
		}
		int kt = 1;
		if (strlen(a0) == strlen(b0))
			for (int i=0; i<strlen(a0); i++)
				if (a0[i] - b0[i] < 0) {
					kt = 0;
					break;
				}	
		int max = 0, nho = 0;
		if (strlen(a) > strlen(b) || (kt == 1 && strlen(a) == strlen(b))) {
			for (int i=strlen(b); i<strlen(a); i++) {
				strcat (b, "0");
			}
			for (int i=0; i<strlen(a); i++) {
				s[i] = a[i] - b[i] - nho;
				nho = 0;
				if (s[i] < 0) {
					nho = 1;
					s[i] += 10;
				}	
				if (s[i] != 0)	max = i;
			}
			for (int i=max; i>=0; i--) {
				printf ("%d", s[i]);
			}
			printf ("\n");
		}
		else if (strlen(b) > strlen(a) || kt == 0) {
			for (int i=strlen(a); i<strlen(b); i++) {
				strcat (a, "0");
			}
			for (int i=0; i<strlen(b); i++) {
				s[i] = b[i] - a[i] - nho;
				nho = 0;
				if (s[i] < 0) {
					nho = 1;
					s[i] += 10;
				}	
				if (s[i] != 0)	max = i;
			}
			for (int i=max; i>=0; i--) {
				printf ("%d", s[i]);
			}
			printf ("\n");
		}
 	}
}