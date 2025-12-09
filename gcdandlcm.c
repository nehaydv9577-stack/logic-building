#include<stdio.h>
int main(){
    int num,num2,lcm,gcd,i;
    printf("enter any two positive interger:");
    scanf("%d %d",&num,&num2);
    
    for( i=1;i<=num&&i<=num2;i++)
    {
        if(num%i==0 && num2%i==0){
        gcd=i;
        }
    }
    lcm=(num*num2)/gcd;


    printf("The gdc is %d",gcd);
    printf("The lcm if %d",lcm);


return 0;
}