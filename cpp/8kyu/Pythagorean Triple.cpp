bool PythagoreanTriple(const int a, const int b, const int c)
{
    if(a < b && b < c) 
    {
        return (a*a + b*b == c*c);
    }
    else if (b < c && c < a) 
    {
        return (b*b + c*c == a*a);
    }
    else 
    {
        return (a*a + c*c == b*b);     
    }
}