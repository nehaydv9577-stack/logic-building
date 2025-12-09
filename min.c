#include<stdio.h>
#include<limits.h>
int main()

{
    int arr[10]={2,7,9,4,-56,-8000,-4568765,2445432,654,654332};
    int min=INT_MAX;
    
    for(int i=0;i<=9;i++)
    {
    if(min>arr[i])
    {
        min=arr[i];
    }
    }
    printf("the minimum value is %d",min);

    return 0;
}