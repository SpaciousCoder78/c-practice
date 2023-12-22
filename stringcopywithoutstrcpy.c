#include <stdio.h>
//string copying without strcpy

int main(){
    char str[30],str2[30];
    int i;
    printf("Enter string");
    scanf("%s",str);
    printf("Copying string\n");
    for(i = 0; str[i]!='\0';i++){
        str2[i]=str[i];
    }
    str2[i]='\0';
    printf("copied string: %s",str2);
}
