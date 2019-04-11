#include <stdio.h>
int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int i2 = 1; i2 <= i; i2++) {
			printf("*");
		}
		printf("\n");
	}
}
