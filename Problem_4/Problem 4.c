#include <stdio.h>
#include <string.h>

int intCount(int x);
void arrayFlip(char x[],int y);
void palCheck(int x,int y);
void palFind();

int main()
{
    palFind();

    return 0;
}
int intCount(int x)
{
    int count = 0;
    while (x!=0)
    {
        x/=10;
        ++count;
    }
    return count;
}
void arrayFlip(char x[],int y)
{
    int i,t=y;
    char temp;
    for(i=0;i<(y/2);i++)
    {
        temp = x[i];
        x[i] = x[t-1];
        x[t-1] = temp;
        t--;
    }
}

void palCheck(int x,int y)
{
    char a[y],b[y];
    int n = x,i;

    for(i=0;i<=y;i++)
    {
        a[i] = x%10;
        b[i] = x%10;
        x/=10;
    }
    arrayFlip(b,y);
    if(strcmp(a,b)==0)
        printf("\n%i is a Palindrone",n);

}

void palFind()
{
    int i,j,n;

    for(i=100;i<1000;i++)
    {
        for(j=100;j<1000;j++)
        {
            n = i * j;
            palCheck(n,intCount(n));
        }
    }
}
