#include <stdio.h>
#include<string.h>
//basic file opening writing and reading
int main(){
    FILE *fp,*fp2;
    char buff[30];
    fp= fopen("www.txt","a+");
    fputs("waste fellow",fp);
    rewind(fp);
    while((fgets(buff,30,fp))!=NULL){
        printf("%s",buff);
    }
    fgets(buff,30,fp);
    fp2 = fopen("xxx.txt","a+");
    fputs(buff,fp2);

    fclose(fp);
    fclose(fp2);
}
