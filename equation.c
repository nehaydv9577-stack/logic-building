#include<stdio.h>
int main(){
    int a,b,t1,t2,t3,t4,t5,t6,result;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    t1=a*a;
    t2=b*b;
    t3=t2*t2;
    t4=t1*b;
    t5=t1*t2;
    t6=t1*t3;
    result=t4+t5+t6;
    printf("the result is = %d",result);
    return 0;


}