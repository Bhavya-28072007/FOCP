#include <stdio.h>
 #include <math.h>
 int main()
{
    printf("HEY !! THIS CODE IS TO FIND THE HCF(HIGHTEST COMMON FACTOR)OF TWO NUMBERS\n ENTER 1st NUMBER:");
    int number1,number2,i,hcf;
    scanf("%d",&number1);
    printf("ENTER 2nd NUMBER:");
    scanf("%d",&number2);
    for(i=1;i<=number1&&i<=number2;i++)
    {
        if(number1%i==0&&number2%i==0)
        {
            hcf =i;
        }
    }
    printf("the hcf of %d and %d is %d",number1,number2,hcf);
return 0;
}
