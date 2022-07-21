#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    for(i=a>b?a:b;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
            break;
    }
    if(i==1)
        printf("%d and %d is a co-prime numbers",a,b);
    else
        printf("%d and %d is not a co-prime numbers",a,b);
    return 0;
}
