/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
    int i;
    int* a = malloc(numsSize * sizeof(int)); 
    for(i = 0; i < n; i++)
    {
        a[2 * i] = nums[i];         
        a[2 * i + 1] = nums[i + n];
    }

    *returnSize = numsSize;
    return a;
}
