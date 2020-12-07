// Write a C program to find all prime factors of a number
#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The prime factors of the %d are :",n);
    for(i=2;n>1;i++)
    {
        while(n%i==0)
        {
            printf("%d,",i);
            n=n/i;
        }
    }
    return 0;
}
