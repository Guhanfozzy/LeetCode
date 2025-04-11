/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int n, int* returnSize) 
{
    int *ans = malloc(10000*sizeof(int));
    int i;
    for(i=0;i<n;i++)
    {
        ans[i]=nums[nums[i]];
    }
    *returnSize = n;
    return ans;
}