int numberOfEmployeesWhoMetTarget(int* hours, int n, int target) 
{
    int i,c=0;;
    for(i=0;i<n;i++)
    {
        if(hours[i]>=target)
        c++;
    }  
    return c; 
}