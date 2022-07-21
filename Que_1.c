#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a=1,b=0,i,c;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(i==n)
            printf("%dth term of fibonnaci series is %d",n,c);
        else
        {
            a=b;
            b=c;
        }
    }
    return 0;
}
