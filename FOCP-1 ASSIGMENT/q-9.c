#include <stdio.h>
int main()
{
    int number[5],i;
    for(i=0;i<5;i++)
    {
        printf("ENTER NUMBER %d",i);
        scanf("%d",&number[i]);

    }
    for(i=0;i<5;i++)
    {
        if(number[i]!=99)
        continue;
        else if (number[i]==99)
        {
            printf("%d index has value of 99 ",i);
            break;
        }
    }
    return 0;

}
