#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER TILL WHICH U WANT UR FIBONACCI SERIES");
    scanf("%d",&n);
    int number1=0,number2=1,sum=number1+number2,i;
    printf("THE FIBONACCI SERIES IS 0,1");
    for(i=3;i<=n;i++)
   {
     sum=number1+number2;
     printf(",%d",sum);
    number1=number2;
    number2=sum;
}

return 0;

}
