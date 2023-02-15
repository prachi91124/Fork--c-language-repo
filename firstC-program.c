#include<stdio.h>
int main()
{
    int num =0, choice =0;
    printf("Enter any number");
    scanf("%d",&num);


    printf("enter your choice");
    scanf("%d",&choice);

    switch(choice)
    {

        case4:
        printf("This is the Fibonacci Series");
        break;

        case 3:
        printf("Factorial Logic");
        break;

        default:
        printf("choice is invalid");

    }

    return 0;


}
