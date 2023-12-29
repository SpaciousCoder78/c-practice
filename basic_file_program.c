#include <stdio.h>
//basic file opening writing and reading
int main(){
    FILE *fp;
    char buff[30];
    fp= fopen("www.txt","a+");
    fputs("waste fellow",fp);
    rewind(fp);
    fgets(buff,30,fp);
   printf("%s",buff);

    fclose(fp);
}
