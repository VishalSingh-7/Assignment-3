/* 
Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40%  : Grade F
*/
#include <stdio.h>
int main()
{
    int phy,chem,bio,math,com,sum;
    float perc;
   
    printf("Enter the Marks of the Physics      :");
    scanf("%d",&phy);
    printf("Enter the Marks of the Chemistry    :");
    scanf("%d",&chem);
    printf("Enter the Marks of the Biology      :");
    scanf("%d",&bio);
    printf("Enter the Marks of the Mathematics  :");
    scanf("%d",&math);
    printf("Enter the Marks of the Computer     :");
    scanf("%d",&com);
    perc=(phy+chem+bio+math+com)/5;
    printf("Percentage :%f %",perc);
    if(perc>=90)
    {
        printf("\n Grade A");
    }
    else if(perc>=80)
    {
        printf("\n Grade B");
    }
    else if(perc>=70)
    {
        printf("\n Grade C");
    }
    else if(perc>=60)
    {
        printf("\n Grade D");
    }
    else if(perc>=40)
    {
        printf("\n Grade E");
    }
    else if(perc<40)
    {
        printf("\n Grade F");
    }
    return 0;
}