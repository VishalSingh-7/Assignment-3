//Write a C program to find power of a number using for loop.
#include <stdio.h>
int main()
{
    int i,j,n;
    long long power=1;
    printf("Enter the base of the number:");
    scanf("%d",&n);
    printf("Enter the exponent of the number:");
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        power=power*n;
    }
    printf(" %d^%d = %lld",n,j,power);
    return 0;
}