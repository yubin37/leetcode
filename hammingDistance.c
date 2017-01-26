#include <stdio.h>


int hammingDistance(int x, int y) {
	int counter = 0;
	int temp = x ^ y;
	for (int i = 0; i < 32; i++) {
		if ((temp & 1) == 1) {
			counter++;
		}
		temp >>= 1;
	}
	return counter;
}

int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("hammingDistance of %d and %d is %d\n",
			x, y, hammingDistance(x, y));
	return 0;
}
