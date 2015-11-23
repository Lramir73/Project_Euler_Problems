#include <stdio.h>

int prime(int x);

int main()
{
    int x = 2,count = 0;
    while (count != 10001)
    {
        if(prime(x)==1)
        {
            count++;
            printf("\n%i: %i",count,x);
            x++;
        }
        else
        {
            x++;
        }
    }
    return 0;
}

int prime(int x)
{
    int i,count = 0,n = x/2;
    for(i=2;i<=n;i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    if (count>0)
    {
        //printf("%i is Composite",x);
        return 0;
    }
    else
    {
        //printf("%i is Prime",x);
        return 1;
    }
}
