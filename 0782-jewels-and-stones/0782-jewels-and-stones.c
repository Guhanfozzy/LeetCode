int numJewelsInStones(char* jewels, char* stones) 
{
    int i, j, c = 0;
    for(i=0;jewels[i]!='\0';i++)
    {
        for(j=0;stones[j]!='\0';j++)
        {
            if(jewels[i]==stones[j])
                c++;
        }
    }
    return c;
}
