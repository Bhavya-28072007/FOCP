#include <stdio.h>
int main()
{
    int number[5]={5,7,2,13,10},i,j,count=0,flag=1;
    for(i=0;i<5;i++)
    {
        for(j=2;j<number[i];j++)
        {
            if(number[i]%j==0)
            {
                flag=0;
                break;
            }
            else if (number[i]%j!=0)
            {
                flag=1;
            }

        }
        if(flag==1)
        {
            count++;
        }
    }
    printf("there are %d prime numbers",count);
    
    return 0;

}
