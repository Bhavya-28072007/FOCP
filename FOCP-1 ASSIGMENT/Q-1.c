//que1{ARMSTRONG NUMBER}
#include <stdio.h>
#include <math.h>
int main()
{
    printf("HEY!! THIS CODE IS HERE TO CHECK WHETHER A NUMBER IS ARMSTRONG OR NOT\n ENTER YOUR POSITIVE INTEGER");
    int number,count=0,rem,sum=0;
    scanf("%d",&number);
    int temp=number;
   //TO COUNT THE NUMBER OF DIGITS
    if(number==0)
    {
        count=1;
    }
    else
    {int num=number;
        while(num>0)
        {
            num=num/10;
            count=count+1;
        }
    }
    printf("%d are the number of digits in the number",count);
    int temp2 = number;
//FOR ARMSTRONG NUMBER VERIFICATION
while(temp2>0)
{
    rem=temp2%10;
    temp2=temp2/10;
    int number2 = pow(rem,count);
    sum=sum+number2;
}
printf("\nTHE NUMBER AFTER WE GOT AFTER THE OPERATION IS %d",sum);
if(sum==temp)
{
    printf("\nIT IS AN ARMSTRONG NUMBER");
}
else
printf("\nNOT AN ARMSTRONG NUMBER");

}
