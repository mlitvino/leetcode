
bool canJump(int* nums, int numsSize) {
    int right;
    int last;

    right = numsSize - 1;
    last = right;
    while (right >= 0)
    {
        if (nums[right] + right >= last)
            last = right;
        right--;
    }
    if (last == 0)
        return (true);
    return (false);
}
  