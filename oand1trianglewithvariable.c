#include<stdio.h>
int main()
{
    int r,i,j;
    printf("enter the number of row :");
        scanf("%d",&r);
        int a=1;
        for( i=1;i<=r;i++)
        {
            if(i%2!=0) a=1;
         else a=0;
        for( j=1;j<=i;j++){
        printf("%d",a);
        if(a==0) a=1;
         else a=0;
        
        
        }
        
        
        printf("\n");
        }
        return 0;
}