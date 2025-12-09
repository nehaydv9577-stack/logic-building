#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int even=0,odd=0;
    int arr[];
    for( int i=0;i<=6;i++)
    {
    if(arr[i]%2==0)
    {

        even++;
    } 
    else{
        odd++;
    }
}
    printf("the count even is %d ",even);
    printf("the count odd is %d ",odd);
    return 0;
}