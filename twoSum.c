#include <stdio.h>
#include <stdlib.h>

/**
   * Note: The returned array must be malloced, assume caller calls free().
    */
int* twoSum(int* nums, int numsSize, int target) {
	int *result = malloc(2 * sizeof(int));
	memset(result, 0, sizeof(int) * 2);
	int i;
	int j;
	for (i =  0; i < numsSize - 1; i++) {
		for (j = i + 1; j < numsSize; j++) {
			if (nums[i] + nums[j] == target) {
				result[0] = i;
				result[1] = j;
				break;
			}
		}
	}

	return result;
}

int main(void)
{
	int nums[4] = {2, 7, 11, 15};
	int *result = twoSum(nums, 4, 9);
	printf("[%d, %d]", result[0], result[1]);
	free(result);
	return 0;
}
