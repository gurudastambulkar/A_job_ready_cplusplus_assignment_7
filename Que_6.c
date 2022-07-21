#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=100;i++)
    {
        if(i==1||i==2)
            printf("%d ",i);
        else
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                    break;
                else
                    break;
            }
            if(i%j!=0)
                printf("%d ",i);
        }
    }
    return 0;
}
