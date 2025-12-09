#include<stdio.h>
int main(){
    FILE *pFile=fopen("//home//likhith-thejas//Desktop//newfile.txt","r");
    char buffer[1024]={0};
    if(pFile==NULL){
        printf("Could not  open  file");
        return 1;
    }
    while( fgets(buffer,sizeof(buffer),pFile)!= NULL){
        printf("%s",buffer);

        
    }
    fclose(pFile);
    return 0;
}