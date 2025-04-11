int reverseDegree(char* s) 
{
    int i,reverse,degree = 0;
    for(i=0;s[i]!= '\0';i++)
    {
        reverse=26-(s[i]-'a');
        degree=degree+(i+1)*reverse;
    }
    return degree;
}
