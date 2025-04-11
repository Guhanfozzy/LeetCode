/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int n , int target, int* returnSize) 
{
    int *a = malloc(10000* sizeof(int));
    int i,j,s;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            s = nums[i] + nums[j];
            if(s==target)
            {
                a[0] = i;
                a[1] = j;
            }
        }
    }
    *returnSize= 2;
    return a;
}