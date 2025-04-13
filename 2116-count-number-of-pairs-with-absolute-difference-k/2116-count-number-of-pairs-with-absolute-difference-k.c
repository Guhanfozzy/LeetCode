int countKDifference(int* nums, int n, int k) 
{
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(nums[i]-nums[j]==k)
            c++;
        }
    } 
    return c;   
}