#include<stdio.h>
int main()
{
    int arr[4]={2,7,9,4};
    int max=arr[0];
    
    for(int i=0;i<=3;i++)
    {
    if(max<arr[i]-1)
    {
        max=arr[i];
    }
    }
    printf("the maximum value is %d",max);

    return 0;
}