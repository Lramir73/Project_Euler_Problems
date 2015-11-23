#include <stdio.h>

int main()
{
    long long sum = 2;
    int i;

    for(i=3;i<2000000;i+=2)
    {
        if(prime(i)==1)
        {
            sum+=i;
            //printf("%i\n",i);
        }
    }
    printf("Sum = %lld\n",sum);
    return 0;
}

int prime(int x)
{
    int i,count = 0,n = x/2;
    if(x%2==0)
    {
        count++;
    }
    else
    {
        for(i=3;i<=n;i+=2)
        {
            if(x%i==0)
                count++;
        }
    }

    if (count>0)
        return 0;
    else
        return 1;
}
