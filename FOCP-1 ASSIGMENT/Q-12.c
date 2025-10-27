#include<stdio.h>
int main()
{
    int marks[10]={34,56,78,90,33,45,99,33,55,66},i;
    int max = marks[0];
    int min = marks[0];
    for(i=0;i<10;i++)
    {
        if(marks[i]>max)
        {
            max=marks[i];
        }
        if(marks[i]<min)
        {
            min=marks[i];
        }
    }
    printf("\nTHE MAXIMUM MARKS ARE %d",max);
    printf("\nTHE MINIMUM MARKS ARE %d",min);
    return 0;
}
