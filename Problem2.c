// Write a C program to find all factors of a number.
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Factor of the %d = ",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d,",i);
        }
    }
      return 0;
}
