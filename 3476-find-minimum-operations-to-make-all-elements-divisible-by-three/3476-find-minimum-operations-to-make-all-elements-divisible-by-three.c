int minimumOperations(int* nums, int n) 
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(nums[i]%3!=0)
        c++;     
    }
    return c;
}