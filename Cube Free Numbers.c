#include <stdio.h>
#include <math.h>
int main(){
    int k,a,b,c=0,i,j;
    scanf("%d", &k);
        for(i=2;i<100;i++)
        {
            a=pow(i,3);
            if(k % a==0)
            {
                printf("Not Cube Free");
            }
            else
            {
                for(j=2;j=k;j++)
                {
                    if(j%a==0)
                        c++;
                }
            }
        }
        printf("%d",k-c);
}

