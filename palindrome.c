#include <stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i/10==0)
        x++;
        else if(i/10>0&&i/10<10)
        {
            if(i%10==i/10)
            {
                x++;
            }
        }
        else if(i/100>0&&i/100<10)
        {
            if(i/100==i%10)
            {
                x++;
            }
        }
        else if(i/1000>0&&i/1000<10)
        {
            int a=i/100,b=i%100,c=b/10+(b%10)*10;
            if(a==c)
            {
                x++;
            }
        }
        else if(i/10000>0&&i/10000<10)
        {
            if(i/1000==i%1000)
            {
                x++;
            }
        }
        else if(i/100000>0&&i/100000<10)
        {
            int d=i/1000,e=i%1000,g=e/100+(e%100)/10+(e%10)*100;
            if(g==d)
            {
                x++;
            }
        }
    }
    printf("%d",x);
}
