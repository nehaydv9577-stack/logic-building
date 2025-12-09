#include<stdio.h>
int main()
{
    int arr[7]={1,2,3,4,56,8,9};
    int esum=0,osum=0;
    for(int i=0;i<=6;i++)
    {
        if(i%2==0)
        {
            esum=esum+arr[i];

        }
        else{
            osum=osum+arr[i];

        }
    }
    printf("%d in the sum of the even\n",esum);

    printf("%d in the sum of the odd",osum);
return 0;
}
