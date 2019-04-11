#include <stdio.h>


int n[1000];

int main(void) {

	int i1, i2, min, c1, c2, num;

	scanf("%d", &num);

	for (i1 = 0; i1 < num; i1++) {
		scanf("%d", &n[i1]);
	}

	for (i1 = 0; i1 < num; i1++) {
		min = 1001;
		for (i2 = i1; i2 < num; i2++) {
			if (min > n[i2]) {
				min = n[i2];
				c2 = i2;
			}
		}
		c1 = n[i1];
		n[i1] = n[c2];
		n[c2] = c1;
	}

	for (i1 = 0; i1 < num; i1++) {
		printf("%d\n", n[i1]);
	}

	return 0;
}
