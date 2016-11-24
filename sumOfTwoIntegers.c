#include <stdio.h>

int getSum(int a, int b)
{
	unsigned int result = 0;
	int carry = 0;
	int i;
	for (i = 1; (i | 0) != 0; i = i << 1) {
		int a_bit = a & i;
		int b_bit = b & i;
		if (!(a_bit | b_bit)) {
			if (carry) {
				result = result | i;
				carry = 0;
			}
		} else if (a_bit & b_bit) {
			if (carry) {
				result = result | i;
			} else {
				carry = 1;
			}
		} else {
			if (carry) {
				carry = 1;
			} else {
				result = result | i;
			}
		}
	}

	return result;
}
int main(void)
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("sum of %d and %d is : %d\n",
			num1, num2,
			getSum(num1, num2));

	return 0;
}
