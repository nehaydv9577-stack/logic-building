#include<stdio.h>
int main()
{
    int r,i,j;
    printf("enter the number of row :");
        scanf("%d",&r);
        int a=1;
        for( i=1;i<=r;i++)
        {
        for( j=1;j<=i;j++)
        {
            
        printf("%d",a);
        a++;
        }
        printf("\n");
        }
        return 0;
}