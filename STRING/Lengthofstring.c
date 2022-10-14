#include <stdio.h>
#include <string.h>
int main() {

            char string[100];
            int length;

            printf("Enter the words to be Printed \n");
            
            //scanf("%s",string); To print the space also----

            scanf("%[^\n]",string); 

        length=strlen(string);

        printf("The length of %s is %d",string,length);
        
        return 0;

}