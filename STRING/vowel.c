//Program to count  the number of vowels used in the Sentence

#include<stdio.h>
#include<string.h>

int main() 
{

char str[20];
int i,count;

printf("Enter the Sentence \n");
gets(str);

//LOOP to count the vowel

for(i=0; i<strlen(str); i++)
switch(str[i])
{
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    count++;
    break;
}

printf("\n%d vowels are present in the string '%s'",count,str);

return 0;
}