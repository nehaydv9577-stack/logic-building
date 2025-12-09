#include<stdio.h>

int main(){
    int i,j,r,c;
    printf("enter the value of row:");
    scanf("%d",&r);
    printf("enter the value of column:");
    scanf("%d",&c);
    for(i=1;i<=r;i++)
    {
        for( j=1;j<=c;j++)
        {
        if(i == 1 || i==r || j==1 || j==c) 
        printf("*");
            else printf(" ");
    
}
printf("\n");
        
    }


return 0;
}