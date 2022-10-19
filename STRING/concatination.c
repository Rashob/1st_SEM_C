// Program to concatenate two strings
#include <stdio.h>
#include <string.h>
int main()
{

    char st[20], st1[20], st2[20];
    int i, j;

    printf("Enter the first string: \n");
    gets(st1);
    printf("Enter the second string: \n");
    gets(st2);
    // loop to copy the first string to the resultant

    i = 0;
    j = 0;

    while (st1[i] != '\0')
    {
        st[j] = st1[i];
        i++;
        j++;
    }
    // adding the null character(White space) to the end of the resultant string
    st[j] = ' ';
    j++;
    // loop to copy the second string to the resultant string
    i = 0;
    while (st2[i] != '\0')
    {
        st[j] = st2[i];
        i++;
        j++;
    }
    st[j] = '\0';
    printf("The resultant string is:%s \n", st);
}