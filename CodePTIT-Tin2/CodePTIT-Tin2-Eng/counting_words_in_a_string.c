#include <stdio.h>
#include <string.h>
int main() {
	int t; scanf("%d\n", &t);
	while (t--) {
		char a[250];
		gets(a);
		int count = (a[0] == ' ') ? 0 : 1;
		for (int i = 0; i < strlen(a) - 1; i++) {
			if (a[i] == ' ' && a[i + 1] != ' ') count++;
		}
		printf("%d", count);
		printf("\n");
	}
}

