Q17 /*  Design a C program to delete an element from the front, middle, or end of an array, and print 
the array before and after deletion.  */

#include<stdio.h>
int main(){
    int a,t,c,s;
    printf("Enter the maximum size of the array: ");
    scanf("%d",&s);
    printf("Enter the no of elements in the array: ");
    scanf("%d",&a);
    int arr[s];
    for (int i =0;i<a;i++){
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i =0;i<a;i++){
        printf("\n%d",arr[i]);
    }
    printf("\n\nWhere do you want to delete the element?\n");
    printf("1. Front\n2. Middle\n3. End\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    if (c==1){
        for (int i=0;i<a-1;i++){
            arr[i]=arr[i+1];            
        }
        a--;
    }
    else if (c==2){
        int m=a/2;
        for (int i=m;i<a-1;i++){
            arr[i]=arr[i+1];            
        }
        a--;
    }
    else if (c==3){
        a--;  
    }
    for (int i =0;i<a;i++){
        printf("\n%d",arr[i]);
    }
    return 0;
}
