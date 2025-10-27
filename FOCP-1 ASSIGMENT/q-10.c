#include <stdio.h>
int main()
{
    int marks[5],i,count=0;
    for(i=0;i<5;i++)
    {
        printf("ENTER MARKS OF STUDENT %d",i);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        if(marks[i]==99)
        printf("\nSTUDENT %d HAS SCORED 99 MARKS",i);
    }
    for(i=0;i<5;i++)
    {
        if(marks[i]==99)
        count=count+1;
    }
    printf("\n%d students have scored 99 marks",count);
    return 0;
}
