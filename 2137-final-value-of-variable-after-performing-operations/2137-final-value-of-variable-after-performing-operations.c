int finalValueAfterOperations(char** operations, int n) 
{ 
    int i,x;
    x=0;
    for(i=0;i<n;i++)
    {
        if(operations[i][1]=='+')
        x++;
        else
        x--;
    }
    return x;
}