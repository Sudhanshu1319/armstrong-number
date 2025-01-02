#include<stdio.h>
int main()
{
    int n,a,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        a=n%10;
        sum=sum+a*a*a;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("it is armstrong");
    }
    else{
        printf("its not");
    }

    return 0;
}