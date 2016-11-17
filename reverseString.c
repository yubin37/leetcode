#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseString(char* s) {
	unsigned long int length = strlen(s);
	if (length == 0) {
		return s;
	}
	char *reverse = malloc(sizeof(char) * (length + 1));
	memset(reverse, 0, sizeof(char) * (length + 1));
			    
	unsigned long int i;
	for (i = 0; i < length; i++) {
		reverse[i] = s[length - i - 1];
	}
	return reverse;
}

int main(void)
{
	printf("%s reverse is : %s\n",
			"", reverseString(""));
	printf("%s reverse is : %s\n",
			"hello", reverseString("hello"));
	printf("%s reverse is : %s\n",
			"i love u", reverseString("i love u"));
	printf("%s reverse is : %s\n",
			"race a car", reverseString("race a car"));
	return 0;
}
