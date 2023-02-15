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
    case 1:
    printf("This case contains the prime number");
    break;


    default:
        printf("choice is invalid");
    }

    return 0;



}
