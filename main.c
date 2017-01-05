#include <stdio.h>
#include <stdlib.h>

/*function exercise #1*/
int main()
{ char confirm;

    do
{
    printf("MENU\n");
    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");



    int choice;
    int num1, num2;
    printf("Enter your choice by inputing a single integer then hit enter:");
    scanf("%d", &choice);
    printf("Enter your two numbers by inputting the first number and hit enter, then input the second number and hit enter:");
    scanf("%d %d", &num1, &num2 );
    printf("\n");

    int add (num1, num2)
    {
        return(num1+ num2);

    }

    int subtract (num1, num2)
    {
        return (num1 - num2);

    }

    int multiply (num1,num2)
    {
        return (num1*num2);

    }

    float divide (num1,num2)
    {
        return (num1/num2);
    }

    switch (choice)
    {
        case 1: printf ("Results: %d\n", add(num1, num2)); break;
        case 2: printf("Results: %d\n", subtract (num1, num2)); break;
        case 3: printf("Results: %d\n", multiply (num1, num2)); break;
        case 4: printf("Results: %f\n", divide (num1, num2)); break;
        default: printf("invalid");
    }


 printf("\nPress y then hit enter to continue:");
 scanf("%s", &confirm);
printf("\n");
 }
while (confirm == 'y');

return 0;


}



