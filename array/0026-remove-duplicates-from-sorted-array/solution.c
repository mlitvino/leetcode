int removeDuplicates(int* nums, int numsSize) {
    int count = 0;

    for (int i = 0; i < numsSize; i++)
        if (nums[i] != nums[count])
            nums[++count] = nums[i];
    return (count + 1);
}
