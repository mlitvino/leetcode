int removeDuplicates(int* nums, int numsSize) {
    int k = 0;

    for (int j = 0, c = 0, x = nums[j]; j < numsSize;)
    {
        if (c > 1)
        {
            while (j < numsSize && nums[j] == x)
                j++;
            if (j != numsSize)
                x = nums[j];
            c = 0;
        }
        while (j < numsSize && nums[j] == x && c < 2)
        {
            nums[k++] = nums[j++];
            c++;
        }
        if (j < numsSize && nums[j] != x)
        {
            x = nums[j];
            c = 0;
        }
    }
    return (k);
}
