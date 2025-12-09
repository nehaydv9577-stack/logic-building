


#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[4]={2,7,9,4};
    int max= INT_MIN;
    int smax=INT_MIN;
    
    for(int i=0;i<=3;i++)
    {
    if(max<arr[i])
    {
        max=arr[i];
    }
    }
    for(int i=0;i<=3;i++)
    {
    if(arr[i]!=max && smax<arr[i])
    {
        smax=arr[i];
    }
    }
    printf("the  second maximum value is %d",smax);

    return 0;
}