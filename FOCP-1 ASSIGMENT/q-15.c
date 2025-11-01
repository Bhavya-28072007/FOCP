#include <stdio.h>
int main()
{
    int array[5]={1,2,3,4,5},i;
     printf("REVERSE ORDER:\n");
    for(i=0;i<5;i++)
    {    
            printf("%d",array[4-i]);
    }
    return 0;
   
}
