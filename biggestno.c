
// **** PROGRAM TO FIND THE BIGGEST NUMBER USING NESTED IF ******

#include<stdio.h>
int main() {
    int num1,num2,num3;
    printf("enter a number\n");
    scanf("%d",&num1);
    
    printf("enter second number\n");
    scanf("%d",&num2);
    
    printf("enter third number\n");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3)
    printf("%d Is the biggest number.",num1);

    else if(num2>num1 && num2>num3)
    
    printf("%d Is the biggest number.",num2);

    else
    printf("%d Is the biggest number.",num3);

    return 0; 




}