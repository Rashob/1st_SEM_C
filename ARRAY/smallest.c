//program to find the smallest number of the given numberrs using array

#include <stdio.h>
int main()
{
    int num,n,i,small;
    printf ("Enter the number of elements in the array\n");
    scanf ("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d \n",i+1);
        scanf("%d",&num);
        if(i==0)
        {
            small=num;
        }
        else if(num<small)
        {
            small=num;
        }
    }
    printf("The smallest number is %d",small);
return 0;
}