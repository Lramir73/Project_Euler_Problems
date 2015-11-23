#include <stdio.h>
#include <math.h>

int squareSum();
int sumSquare();

int main()
{
    int x = squareSum() - sumSquare();

    printf("%i",x);
    return 0;
}

int squareSum()
{
    int i,t = 0;
    for(i=1;i<=100;i++)
    {
        t+=i;
    }
    return pow(t,2);
}

int sumSquare()
{
    int i,t = 0;
    for(i=1;i<=100;i++)
    {
        t+=pow(i,2);
    }
    return t;
}
