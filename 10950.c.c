#include <stdio.h>
int main()
{
	int A,B,  sum, T;
	scanf("%d", &T);

	for (int i = 1; i <= T; i++) {
		
		scanf("%d %d", &A, &B);
		sum = A + B;
		printf("%d\n", sum);
	}

	return 0;
}