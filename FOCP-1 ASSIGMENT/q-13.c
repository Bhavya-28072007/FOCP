#include <stdio.h>
int main()
{
    int elements[10]={1,0,10,17,19,100,99,1,66,55},i;
    printf("PEAK VALUES ARE:\n");
    for(i=0;i<10;i++)
    { if(i==0&&elements[i]>elements[i+1])
        printf("%d\n",elements[i]);
        else if (i==9&&elements[i]>elements[i-1])
        printf("%d\n",elements[i]);
        else if(elements[i]>=elements[i-1]&&elements[i]>elements[i+1])
        printf("%d\n",elements[i]);
    }
    return 0;
}
