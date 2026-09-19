int majorityElement(int* nums, int numsSize)
{
    int count;

    for (int i = 0, sk = 1; i < numsSize; sk++)
    {
        count = 0;
        for (int j = i; j < numsSize; j++)
            if (nums[i] == nums[j])
                count++;
        if (count > (double)numsSize / 2)
            return (nums[i]);
        while (i < numsSize)
        {
            int j = 0;
            for (; j < sk;)
                if (nums[i] == nums[j++])
                        break;
            if (nums[i] != nums[j - 1])
                break;
            i++;
        }
    }
    return (count);
}
