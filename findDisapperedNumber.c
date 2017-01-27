/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
	 int *counter_arr = malloc(sizeof(int) * numsSize);
	 memset(counter_arr, 0, sizeof(int) * numsSize);

	 for (int i = 0; i < numsSize; i++) {
		 counter_arr[nums[i] - 1]++;
	 }

	 *returnSize = 0;
	 for (int i = 0; i < numsSize; i++) {
		 if (counter_arr[i] == 0)
			 (*returnSize)++;
	 }

	 for (int i = 0, j = 0; i < numsSize; i++) {
		 if (counter_arr[i] == 0) {
			 counter_arr[j] = i + 1;
			 j++;
		 }
	 }

	 return counter_arr;
}
