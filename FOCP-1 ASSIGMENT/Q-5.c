#include <stdio.h>
int main()
{
    printf("THIS CODE IS TO DETERMINE THAT IN WHICH QUADRANT UR POINTS LIE \n ENTER THE X-POINT: ");
    int x,y;
    scanf("%d",&x);
    printf("\nENTER THE Y-POINT:");
    scanf("%d",&y);
    if(x>0&&y>0)
    printf("1ST QUADRANT");
    else if(x<0&&y<0)
    printf("3RD QUADRANT");
    else if(x<0&&y>0)
    printf("2ND QUADRANT");
    else
    printf("4TH QUADRANT");
    return 0;

}
