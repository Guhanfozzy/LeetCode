int numIdenticalPairs(int* nums, int n) 
{
    int i,j,c=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(nums[i]==nums[j])
            c++;
        }
    }   
    return c; 
}