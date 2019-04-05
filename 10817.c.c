#include <stdio.h>
int main()
{
	int A, B, C;

	scanf_s("%d %d %d", &A, &B, &C);

	if (A <= B && B < C) {
		printf("%d", B);
	}
	else if (C <= B && C <= A) {
		printf("%d", B);
	}
	else if (B <= A && A <= C) {
		printf("%d", A);
	}
	else if (C <= A && C <= B) {
		printf("%d", A);
	}
	else if (A <= C && C <= B) {
		printf("%d", C);
	}
	else if (B <= C && B <= A) {
		printf("%d", C);
	}
}