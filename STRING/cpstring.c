#include <stdio.h>

int main() {

    char string[100], stringcp[100];

    int leng=0,i=0,j=0;

    printf("Enter the digits to be printed \n");
    scanf("%[^\n]",string);
    
    while (string[i]!= '\0')
    {
        stringcp[j]=string[i];
        i++;
        j++;
    }
    stringcp[i]='\0';

    printf("copied %s",stringcp);

    return 0;


}