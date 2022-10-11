//program to find the smallest number of the given numbers using array

#include <stdio.h>
int main()
{
    int num[50],n,i,small;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d",i+1);
        scanf("%d",&num[i]);
    }
    small=num[0];
    if (num[i]<small)
    {
        small=num[i];
    }
    printf("The smallest number is %d",small);
    
}
