void rotate(int* nums, int numsSize, int k) {
    int rem = numsSize;
    int move;
    int temp1 = nums[0];
    int temp2;
    int start = 0;

    if (numsSize == k || numsSize < 2 || k == 0)
        return ;
    else
        move = k % numsSize;
    for (int i = 0; rem > 0; rem--)
    {
        i += move;
        if (i >= numsSize)
            i = i % numsSize;
        temp2 = nums[i];
        nums[i] = temp1;
        temp1 = temp2;
        if (i == start)
        {
            start++;
            i++;
            temp1 = nums[i];
        }
    }
}
