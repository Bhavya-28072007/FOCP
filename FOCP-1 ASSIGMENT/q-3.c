#include<stdio.h>
//defining the operation
int subtract(int a,int b)
{return a-b;}
int main()
{
    printf("ENTER THE 1ST NUMBER:");
    int number1,number2;
    scanf("%d",&number1);
     printf("ENTER THE 2nd NUMBER:");
     scanf("%d",&number2);
     int result =  subtract(number1,number2);
     printf("the result of subtraction of both the numbers are %d",result);
     return 0;
}
