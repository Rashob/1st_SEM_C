// Program to print the string in reverse order

#include <stdio.h>
#include <string.h>

int main()
{

    char str[20], revstr[20];
    int i, j;

    printf("Enter the sentence to be reversed : \n");
    gets(str);

    i = 0;
    j = strlen(str) - 1;

    // LOOP TO REVERSE THE STRING

    while (j >= 0)
    {
        revstr[i] = str[j];
        i++;
        j--;
    }

    revstr[i] = '\0';

    printf("The reverse order string of %s is %s\n", str, revstr);
    return 0;
}