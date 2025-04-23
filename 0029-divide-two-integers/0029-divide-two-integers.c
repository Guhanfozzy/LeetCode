int divide(int dividend, int divisor) 
{
    int a;
    if (dividend == INT_MIN && divisor == -1) 
        return INT_MAX;
    a=(long long)dividend/divisor;
    return a;    
}