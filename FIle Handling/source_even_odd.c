#include<stdio.h>
#include<stdlib.h>
int main(){
   FILE *fp,*fp1;
    fp=fopen("even.txt","w");
    fp1=fopen("odd.txt","w");
    if(fp==NULL || fp1==NULL){
        printf("File not found");
        exit(1);
    }
    fprintf(fp,"Even numbers are:\n");
    fprintf(fp1,"Odd numbers are:\n");
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int num[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++){
        if(num[i]%2==0){
            fprintf(fp,"%d ",num[i]);
        }
        else{
            fprintf(fp1,"%d ",num[i]);
        }
    }
    fclose(fp);
    fclose(fp1);
    return 0;
}
