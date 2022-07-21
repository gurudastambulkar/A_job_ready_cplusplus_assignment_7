#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(n==c)
            break;
        if(c>n)
            break;
        a=b;
        b=c;
    }
    if(n==c)
        printf("%d is there in fibonacci series",n);
    else
        printf("%d is not there in the fibonacci series",n);
    return 0;
}
