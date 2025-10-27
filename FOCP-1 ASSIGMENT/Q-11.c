#include <stdio.h>
int main()
{
    int scores[5]={42,43,66,9,8},i,even_array[10],odd_array[10];
    printf("EVEN NUMBERS ARE:");
    for(i=0;i<5;i++)
    {
        if(scores[i]%2==0)
        {
            even_array[i]=scores[i];
            printf("%d\n",scores[i]);
        }
    }
    printf("ODD NUMBERS ARE:");
     for(i=0;i<5;i++)
    {
        if(scores[i]%2!=0)
        {
            odd_array[i]=scores[i];
            printf("%d\n",scores[i]);
        }
    }
    return 0;

}
