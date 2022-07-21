#include<stdio.h>
#include<conio.h>
int main()
{
    int x,copy,y=0,z=0;
    printf("Enter a number ");
    scanf("%d",&x);
    copy=x;
    while(copy!=0)
    {
        y=copy%10;
        z=(y*y*y)+z;
        copy=copy/10;
    }
    if(x==z)
        printf("%d is a armstrong number",x);
    else
        printf("%d is not a armstrong number",x);
    return 0;
}

