int jump(int* nums, int numsSize) {
    int count;
    int right;
    int i;

    count = 0;
    right = numsSize - 1;
    while (right > 0)
    {
        for (int i = 0; i < right; i++)
        {
            if (nums[i] + i >= right)
            {
                count++;
                right = i;
            }
        }
    }
    return (count);
}
