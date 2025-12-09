# include<stdio.h>
int main(){
    int  n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n & 1)    /*basically checking of last digit     but we can that n & 0 for even checking 
     and also that why we cant do with floating value */
    {
        printf("the number is odd %d \n",n);
    }
    else 
    {
        printf("the number is even %d \n",n);
    }
  
    return 0;
}
