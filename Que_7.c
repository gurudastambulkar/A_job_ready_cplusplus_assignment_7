#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a,b,c;
    printf("Enter two numbers to print prime numbers between them: ");
    scanf("%d%d",&i,&j);
    a=i>j?i:j;
    b=i<j?i:j;
    for( ;b<=a;b++)
    {
        if(b==1||b==2)
            printf("%d ",b);
        else
        {
            for(c=2;c<b;c++)
            {
                if(b%c==0)
                    break;
                else
                    break;
            }
            if(b%c!=0)
                printf("%d ",b);
        }
    }
    return 0;
}
