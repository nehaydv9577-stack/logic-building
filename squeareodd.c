#include<stdio.h>44
int main()
{
    int r,i,j;
    printf("enter the number of row :");
        scanf("%d",&r);
        for( i=1;i<=r;i++)
        {
        for( j=1;j<=r*2-1;j+=2)
        {
        printf("%d",j);
        }
        printf("\n");
        }
        return 0;
}