#include <stdio.h>
#include <math.h>
int main()
{
    int number,input,i=0,rem=0,sum=0,rev=0,base=1;
    printf(" PRESS 1 TO CONVERT A NUMBER FROM BINARY TO DECIMAL OR PRESS 2 TO CONVERT A NUMBER FROM DECIMAL TO BINARY ");
    scanf("%d",&number);
    printf("ENTER YOUR NUMBER");
    scanf("%d",&input);
    if(number==1)
    {
        while(input>0)
        {
            rem=input%10;
        sum=sum+(rem*pow(2,i));
        input = input/10;
        i++;
    }
    printf("THE BINARY TO DECIMAL CONVERSION IS %d",sum);
    }
    

    else if(number==2)
    {
    
        while(input>0)
        {
            rem=input%2;
            input=input/2;
            rev = (rem*base+rev);
            base=base*10;
        }
        printf("the decimal to binary conversion is %d",rev);}

    
    return 0;

}
