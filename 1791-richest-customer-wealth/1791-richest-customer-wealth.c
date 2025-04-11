int maximumWealth(int** accounts, int n, int* accountsColSize) 
{
    int i,j,s,big=0;
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<accountsColSize[i];j++)
        {
            s=s+accounts[i][j];
        }
    if(s>big)
    big=s;
    }
    return big;    
}