#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//this is the most basic version of calculator where you have give the numbers and the operators . It can only execute 4 functions. Apart from some errors , it works okay. Upgrade is on its way !!  
int main()
{
    printf("\t\t\t\t \"Misbah Ahmed Araf's Basic Calculator Version 1.0\" \t\n\n\n");
    printf("\t\tPlease Type Number_1 ,then the operator you like, followed by Number_2\n\n\n");

    double Number_1=0 , Number_2=0 ;
    char Operator = 0, Confirmation=0 , Comparer =0;

    scanf("%lf %c %lf",&Number_1 ,&Operator,&Number_2);
    switch (Operator)
    {

     case '+': printf("The Added Value is= %.1lf + %.1lf= %.1lf",Number_1,Number_2,(Number_1+Number_2));
     break;

     case '-': printf("The Subtracted Value is= %.1lf - %.1lf= %.1lf",Number_1,Number_2,(Number_1-Number_2));
     break;

     case '/': printf("The Divided Value is= %.1lf/%.1lf= %.1lf \n\n\t",Number_1,Number_2,((Number_1/Number_2)));
               printf("where the real division value = : %.0lf\n\n\t",(Number_1/Number_2)-((double)((int)Number_1 % (int) Number_2)));
              // The remainder Can't be turned into float, so i'm leaving this part  printf("And\n\n\tRemainder is = %.2lf\n\n", (( (Number_1/Number_2) ) - (float)( ( (Number_1/Number_2) )-((double)((int)Number_1 % (int) Number_2)) ) ) ) ;
     break;


     case '*': printf("The Multiplied Value is= %.1lf * %.1lf= %.1lf",Number_1,Number_2,(Number_1*Number_2));
     break;


    default : printf("Calculation Error\n\n\n");

    }

    int C1,C2;

    printf("\nDo you want to Compare numbers ? Press X for Yes or Y for No \n\n\t");

    scanf("%c",&Confirmation);

    switch (Confirmation)
    {

     case 'X': printf("Please Type the values that you wanna compare:");
     scanf("%lf %lf",&C1,&C2);
     printf("The Typed Values are :%.1lf , %.1lf.",C1,C2);
     break;

     case 'Y' : printf("Calculation Completed\n\n\n");
     break;
    }


    printf("\n\n\n\t\t___Thank you For Using , I'm bringing upgrades in the Version 1.5___\n\n");
    printf("\n\n\n_____________________________________________________");

    return 0;
}
