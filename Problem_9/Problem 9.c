#include <stdio.h>
#include <math.h>

int main()
{
    int n=2,m,check = 0;

    while(n<1000)
    {
        for(m=1;m<n;m++)
        {
            if(pow(n,2)+(n*m)==500)
            {
                printf("n = %i\nm = %i",n,m);

            }
        }
        n++;
    }




    return 0;
}
