#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int x,copy=0,y=0,z;
    for(x=1;x<=1000;x++)
    {
        z=0;
        copy=x;
        while(copy!=0)
        {
            y=copy%10;
            z=(y*y*y)+z;
            copy=copy/10;
        }
        if(x==z)
        {
            printf("%d ",x);
        }
    }
    return 0;
}
