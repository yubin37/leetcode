int findMaxConsecutiveOnes(int* nums, int numsSize)
{
	int counter = 0;
	int max_counter = 0;
	for (int i = 0; i < numsSize; i++) {
		if (nums[i] == 1) {
			counter++;
		} else {
			if (counter > max_counter) {
				max_counter = counter;
			}
			counter = 0;
		}
	}
	if (counter > max_counter) {
		max_counter = counter;
	return max_counter;
}
