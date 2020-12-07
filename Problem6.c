//Write a C program to check whether a number is Strong number or not.
#include <stdio.h>
int main()
{
    int n,m,rem,f,sum=0,i;
    printf("Enter the any number :");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        rem=n%10;
        f=1;
        for(i=rem;i>=1;i--)
        {
            f=f*i;
            
        }
        sum=sum+f;
        n=n/10;
    }
    if(m==sum)
    {
        printf("The %d is the strong number",m);
    }
    else
    {
        printf("The %d is not the strong number",m);
    }
    return 0;
}