//Program to find the biggest of given numbers using array.................!!!!!!!!!!

#include<stdio.h>
int main(){
    int number[20],n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&number[i]);
    }
    int max = number[0];
    for (int i=0;i<n;i++)
    {
        if(max<number[i])
        max=number[i];
    }
    printf("Biggest number is %d\n",max);
    return 0;
}
