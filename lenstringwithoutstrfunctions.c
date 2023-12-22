#include <stdio.h>
//length of string without functions
int main(){
    char str[30];
    int i,len=0;
    printf("Enter string");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    printf("Length: %d",len);
}
