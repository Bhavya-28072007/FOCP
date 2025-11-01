#include <stdio.h>
int main()
{
    int number[5]={1,2,2,3,3},i,j,flag=0;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(number[i]==number[j])
            {
                printf("%d\n",number[i]);
                flag=1;
                break;
            }
      
        }
       
    }
    if(flag==0)
        printf("-1");
return 0;
}
