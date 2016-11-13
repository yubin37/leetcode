#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
	if (n < 1) {
		*returnSize = 0;
		return NULL;
	} else {
		*returnSize = n;
	}

	char **fizzBuzz_arr = malloc((n + 1) * sizeof(char*));
	memset(fizzBuzz_arr, 0, (n + 1) * sizeof(char*));
	int i = 0;
	bool is_fizz;
	bool is_buzz;
	for (i; i < n; i++) {
		is_fizz = false;
		is_buzz = false;

		if (( i + 1 ) % 3 == 0) {
			is_fizz = true;
		}
		if (( i + 1 ) % 5 == 0) {
			is_buzz = true;
		}

		int length = 0;
		if (!(is_fizz || is_buzz)) {
			int j = 1;
			int temp = i;
			while ( temp / 10 != 0) {
				j++;
				temp /= 10;
			}
			length =  j + 1;
		} else {
			length = (is_fizz ? 4 : 0) + (is_buzz ? 4 : 0) + 1;
		}

		fizzBuzz_arr[i] = malloc(sizeof(char) * length);
		memset(fizzBuzz_arr[i], 0, sizeof(char) * length);

		if (!(is_fizz || is_buzz)) {
			snprintf(fizzBuzz_arr[i], length, "%d", i + 1);
		} else {
			snprintf(fizzBuzz_arr[i], length, "%s%s",
					(is_fizz ? "Fizz" : ""),
					(is_buzz ? "Buzz" : ""));
		}
	}
	return fizzBuzz_arr;
}

int main(void)
{
	int length = 0;
	char **result = fizzBuzz(3, &length);

	int i = 0;
	for (i; i < length; i++) {
		printf("%s\n", result[i]);
	}
	return 0;
}
