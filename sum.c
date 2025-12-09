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
    
    int sum=0;
    for (int i=0;i<=4;i++)
    {
        sum=sum+arr[i];

    }
printf("the sum of digitis %d",sum);
return 0;
}