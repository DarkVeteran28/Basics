#include<stdio.h>
int main(){
    FILE *pFile=fopen("//home//likhith-thejas//Desktop//newfile.txt","w");
    char text[]="This is a file written from c code\n";
    fprintf(pFile,"%s",text);
    printf("\nFile was written Successfully\n\n");
    if(pFile==NULL){
        printf("\nError opening file\n");
        return 1;
    }

    fclose(pFile);
    return 0;
}