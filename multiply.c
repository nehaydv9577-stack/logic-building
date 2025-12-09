#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    
    int mul=1;
    for (int i=0;i<=4;i++)
    {
        mul=mul+arr[i];

    }
printf("the multiplication of digitis %d",mul);
return 0;
}