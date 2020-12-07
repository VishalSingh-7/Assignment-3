// Write a C program to find LCM of two numbers.
#include <stdio.h>
int main()
{
    int a,b,i,lcm,hcf;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the Second number :");
    scanf("%d",&b);
    for(i=1; i<=a &&   i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    lcm=(a*b)/hcf;
    printf("The LCM of the %d and %d is %d",a,b,lcm);
    return 0;
}