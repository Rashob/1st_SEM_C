#include<stdio.h>
int main() {

char status,gender;
int age;
printf("Are you married? (Y/N)\n");
scanf("%c",&status);
fflush(stdin);

printf("Enter the Gender?(M/F) \n",gender);
scanf("%c",&gender);

printf("Enter the age : \n");
scanf("%d",&age);

if (status=='Y')
printf("Driver can be insured\n");

else if (status=='N'&& gender=='M' && age>30)
printf("Driver can be Insured");

else if (status=='N' && gender=='F' && age>25)
printf("Driver can be insured\n");
else
printf("Driver can't be insured\n");

return 0;
}





