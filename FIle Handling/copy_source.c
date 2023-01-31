#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp,*fp1;
    fp=fopen("content.txt","r");
    fp1=fopen("copiedcontent.txt","w");
    if(fp==NULL || fp1==NULL){
        printf("File not found!");
        exit(1);
    }
    char ch;
    while((ch=fgetc(fp))!=EOF){
        fputc(ch,fp1);

    }
    fclose(fp);

    fclose(fp1);
    return 0;
    
}