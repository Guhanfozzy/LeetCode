/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int n, int* returnSize) 
{
    int i, j, c;
    int *a = malloc(10000 * sizeof(int));
    for(i=0;i<n;i++)
    {
        if(nums[i]%2==0)
            a[i]=0;
        else
            a[i]=1;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                c=a[i];
                a[i]= a[j];
                a[j] = c;
            }
        }
    }
    *returnSize = n;
    return a;
}
