#include <stdio.h>
int main()
{
	int x, sum = 0;
	
	for (int i = 0; i < 5; i++) {

		scanf("%d", &x);

		if (x < 40) {
			sum += 40;
		}
		else {
			sum += x;
		}
	}
	
	printf("%d\n", sum / 5);
	return 0;
}