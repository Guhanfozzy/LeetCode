int scoreOfString(char* s) 
{
    int i,score=0;
    for(i=0;i<=s[i+1]!='\0';i++)
    {
        score=score+abs(s[i]-s[i+1]);
    }
    return score;
}