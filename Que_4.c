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

    printf("%d is the hcf of %d and %d",i,a,b);
    return 0;
}
