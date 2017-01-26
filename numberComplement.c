#include <stdio.h>

int findComplement(int x)
{
	unsigned int bit_mask = 0xFFFFFFFF;
	int temp = x;
	for (int i = 0; i < 32; i++) {
		if ((temp & 0x80000000) == 0x80000000) {
			break;
		}
		temp <<= 1;
		bit_mask >>= 1;
	}
	return (x ^ bit_mask);
}

int main(void)
{
	int x;
	scanf("%d", &x);
	printf("the complement of %d is %d\n", x, findComplement(x));
	return 0;
}
