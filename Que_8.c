#include<stdio.h>
#include<conio.h>
int main()
{
    int j,x,i=0;
    printf("Enter a number ");
    scanf("%d",&x);
    if(x==1)
    {
        printf("%d is the next prime number",x+1);
        i++;
    }
    for(x=x+1;x<=x+x;x++)
    {
        for(j=2;j<x;j++)
        {
            if(x%j==0)
                break;
            else
                break;
        }
        if(i==0)
        {
            if(x%j!=0)
            {
                printf("%d is the next prime number",x);
                break;
            }
        }

    }
    return 0;
}
