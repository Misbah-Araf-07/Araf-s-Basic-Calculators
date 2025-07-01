#include <stdio.h>
//This Calculator of mine can execute multiple tasks with minimal error and higher accuracy.In this upgraded version , it lets you Choose freely and you dont even need to put any operators. Enjoy!  
int main ()

{
    printf("\t\t\t\t \"Misbah Ahmed Araf's Basic Calculator Version 1.5\" \t\n\n\n");

    char M,N,O,A,B,C,D,X,Y,Z;
    double P=0,Q=0;
    float T,S ;
    int K;

    printf("Please Select The Operation You want to execute:\n\n\t\tPress\tX for Comparison-\n\n\t\t\tY for  Calculation-\n\n\t\t\tZ to know if its odd or even-");
    scanf(" %c",&O);

    switch(O)
    {
        case 'X':
        case 'x':
                 printf("Please type the numbers you want to compare:\n\n\t");
                 scanf("%f %f",&T,&S);

                      if (T==S)
                                printf("%.1f and %.1f are equal\n",T,S);

                      else
                          {

                      if (T>S)  printf("%.1f is greater than %.1f\n",T,S);
                      else      printf("%.1f is greated than %.1f\n",S,T);
                          }
        default: printf("Excution Ended\n\n") ;
        break;

        case 'Y':
        case 'y':

                 printf("Please select the type of operation you want: \n\tPress A for(+)\n\tPress B for(-)\n\tPress C for(x)\n\tPress D for(/)\n\n");
                 scanf(" %c",&N);




          switch (N)
         {
             case 'A':
             case 'a':
                 printf("Please type the two numbers you want to add to each other\n\n");
                 scanf("%lf %lf",&P,&Q);
                 printf("Answer:%.1lf\n",P+Q);
                 break;

            case 'B':
            case 'b':
                 printf("Please type the two numbers you want to subtract from each other\n\n");
                 scanf("%lf %lf",&P,&Q);
                 printf("Answer:%.1lf\n",P-Q);
                 break;


            case 'C':
            case 'c':
                 printf("Please type the two numbers you want to multiply with each other\n\n");
                 scanf("%lf %lf",&P,&Q);
                   if (P==0 || Q==0)   printf("Calculation error\n");
                   if (P!=0 && Q!=0)   printf("Answer:%.1lf\n",P*Q);
                 break;


            case 'D':
            case 'd':
                 printf("Please type the two numbers you want to Divide by each other\n\n");
                 scanf("%lf %lf",&P,&Q);
                   if (P==0 || Q==0)   printf("Answer=0\n");
                   if (P!=0 && Q!=0)   printf("Answer:%.1lf\n",P/Q);
                 break;

            default:
                 printf("Invalid operation selected.\n");
            break;

          }
            break ;


        case 'Z':
        case 'z':
                 printf("Please type the number:\n\n\t");
                 scanf("%d",&K);
                    if (K==0)          printf("The Typed value,%d==0",K);
                    else
                   {
                        if (K%2==0)    printf("%d is an even number\n",K);
                        else           printf("%d is a odd number \n", K);
                   }

        printf("\n\n\t\t\t______________________Calculations Execution done______________________\n\n");

    return 0;
}

}
