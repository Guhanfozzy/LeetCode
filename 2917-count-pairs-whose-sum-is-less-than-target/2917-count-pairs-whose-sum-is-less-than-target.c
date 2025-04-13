int countPairs(int* nums, int n, int target) 
{
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(nums[i]+nums[j]<target) 
        c++;
        }
    }
    return c;
}