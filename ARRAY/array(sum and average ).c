#include <stdio.h>
int main()
{

int a[5],i,avg=0,sum=0;

for (i=0; i<5; i++)
{
    printf("Input %d-th number:",i+1);
    scanf("%d",&a[i]);
    sum += a[i];
    avg = sum/a[i];
}
printf("SUM is %d \n",sum);

printf("AVERAGE (round of) is %d \n",avg);
return 0;

}