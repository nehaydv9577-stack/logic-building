//n= must be odd
#include<stdio.h>
int main(){
    int i,n,j;
    printf("enter the value of n:");
    scanf("%d",&n);
   
      {
    for(i=1;i<=n;i++)
    {
        for( j=1;j<=n;j++)
        {
        if(j==(n/2)+1 || i==(n/2)+1) printf("*");
            else printf(" ");
    
}
printf("\n");
        
    }
}

return 0;
}