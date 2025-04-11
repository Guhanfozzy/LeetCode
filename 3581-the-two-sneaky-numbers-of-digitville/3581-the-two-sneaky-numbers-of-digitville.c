/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) 
{
    int *a = malloc(10000* sizeof(int));
    int i,j,c,x,f,k=0;

    for(i=0;i<numsSize;i++) 
    {
        c=0;
        for(j=0;j<numsSize;j++)
        {
            if(nums[i] == nums[j])
                c++;
        }
        if(c == 2)
        {
            f=0;
            for(x=0;x<k;x++)
            {
                if(a[x]==nums[i])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                a[k++] = nums[i];
                if(k == 2)
                    break;
            }
        }
    }

    *returnSize = 2;
    return a;
}
