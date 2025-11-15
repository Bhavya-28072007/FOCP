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
    int n;
    printf("\n\nWhere do you want to insert the element?\n");
    printf("1. Front\n2. Middle\n3. End\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    printf("Enter the element to insert: ");
    scanf("%d", &n);
    if (c==1){
        for (int i=a;i>0;i--){
            arr[i]=arr[i-1];            
        }
        arr[0]=n;
        a++;
    }
    else if (c==2){
        int m=a/2;
        for (int i=a;i>m;i--){
            arr[i]=arr[i-1];            
        }
        arr[m]=n;
        a++;
    }
    else if (c==3){
        arr[a]=n;
        a++;  
    }
    for (int i =0;i<a;i++){
        printf("\n%d",arr[i]);
    }
    return 0;
}
