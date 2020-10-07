#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int n,r,sum=0,temp,i;

    while (i>0)
    {   
        sum=0;

        printf("Enter the value (Enter '0' to exit)\n");
        scanf("%d",&n);

        if (n==0)
        {
            goto exit;
        }
        

        temp=n;

        while (n>0)
        {
            r=n%10;
            sum=sum*10+r;
            n=n/10;
        }
        n=temp;
        if (n==sum)
        {
            printf("pallmdrone number\n");
        }
        else
        {
            printf("not a pallmdrone number\n");
        }

    }    
    exit: printf("bye bye");
    
}
