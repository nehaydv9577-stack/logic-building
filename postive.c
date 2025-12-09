// write a program to find the positve negative or zero without using if else case.
# include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>=0)
    {
        if(n==0)
        {
            printf("zero");
        }
        else
        {
            printf("positive");
        }
    }
    else
    {
        printf("negative");
    }
    return 0;
}