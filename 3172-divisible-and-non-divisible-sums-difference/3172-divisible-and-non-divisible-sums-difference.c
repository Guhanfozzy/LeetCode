int differenceOfSums(int n, int m) 
{   
    int i,s=0,s1=0;
    for(i=1;i<=n;i++)
    {
        if(i%m!=0)
        s=s+i;
        else
        s1=s1+i;
    } 
    return s-s1;
}