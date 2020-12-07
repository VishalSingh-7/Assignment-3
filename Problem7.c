// Write a C program to print all Strong numbers between 1 to n.
#include <stdio.h>

int main()
{
    int i, j, n, rem, limit;
    long long f, sum;

    printf("Enter upper limit: ");
    scanf("%d", &limit);
    printf("All Strong numbers between 1 to %d are:\n", limit);
    
    for(i=1; i<=limit; i++)
    {
        
        n = i;
        sum = 0; 
        while(n > 0)
        {
            rem = n % 10;
            f=1;
            for( j=1; j<=rem; j++)
            {
                f = f * j;
            }
            
            sum =sum+f; 
            n=n/10;
        }
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}