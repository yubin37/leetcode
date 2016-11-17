#include <stdio.h>
#include <stdbool.h>

#if 0
/* time exceeded solution */
bool canWinNim(int n)
{
	if (n < 0) {
		return false;
	} else if (n <= 3) {
		return true;
	}

	bool n1 = true;
	bool n2 = true;
	bool n3 = true;
	bool n4;
	for (int i = 4; i<= n; i++) {
		if (n1 && n2 && n3)
			n4 = false;
		else
			n4 = true;
		n1 = n2;
		n2 = n3;
		n3 = n4;
	}
	return n4;
}
#endif
bool canWinNim(int n)
{
	return !(n %4 == 0);
}
int main(void)
{
	int number = 0;
	scanf("%d", &number);
	printf("will win or not? %s\n", canWinNim(number)? "yes": "no");

	return 0;
}
