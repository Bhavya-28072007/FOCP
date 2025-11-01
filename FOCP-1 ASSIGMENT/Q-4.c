#include<stdio.h>
int main()
{
    printf("SWAPPING BY USING A TEMPORARY VARAIABLE:\n");
    int a=3,b=101;
    printf("THE VALUES OF a and b before swapping are:\n a=%d\n b=%d",a,b);
    int c = a;
    a=b;
    
    printf("\nTHE VALUES OF a and b after swapping are:\n a=%d \n b=%d",b,c);
return 0;
}
{ int a = 5 , b=10;
    printf("\n BY USING ARITHMETIC OPERATIONS:\n");
    printf("THE VALUES OF a and b before swapping are:\n a=%d\n b=%d",a,b);
    int s = a+b;
    int c=s-b;//gives value of a
    int d=s-a;//gives value of b
    printf("\nTHE VALUES OF a and b after swapping are:\n a=%d \n b=%d",d,c);
    return 0;
}
{
    printf("USING BITWISE OPERATORS:");
    int a=5,b=9;
    printf("THE VALUES OF a and b before swapping are:\n a=%d\n b=%d",a,b);
    a=a^b;
   b=b^a;//value of a
    a=a^b;//value of b
    printf("\nTHE VALUES OF a and b after swapping are:\n a=%d \n b=%d",a,b);
    return 0;

}

{
    printf("SWAPPING USING POINTERS");
    int a=5,b=10;
    printf("THE VALUES OF a and b before swapping are:\n a=%d\n b=%d\n",a,b);
    int *p1=&a,*p2=&b;
    int c = *p1;
    *p1=*p2;
    printf("AFTER SWAPPING THE VALUES:\n a=%d \n b=%d",*p2,c);
    return
}
