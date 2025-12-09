#include<stdio.h>
int main()
{
    int a[5]={2,4,6,7,77};
    int els,i;
    printf("choose from this 2,4,6,7,77\n");
    printf("enter the element:");
    scanf("%d",&els);
    
    for( int i=0;i<5;i++)
    {
        if(els==a[i]){
            break;
        }
    }
        if(i<5)
        {
            printf("element present");


        }
   else
   printf("not present");
    
    return 0;

}