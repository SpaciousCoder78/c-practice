#include <stdio.h>
#include<string.h>
//palindrome without str function

int main(){
    char str[30],str2[30];
    int i, len=0,flag =1;
    printf("Enter a string: ");
    scanf("%s",str);
    for(i =0;str[i]!='\0';i++){
        len++;
    }
    for(i=0;i<len/2;i++){
        if (str[i]!=str[len-1-i]){
            flag =0;
            break;
        }
    }
    if (flag==1){
        printf("Palindrome");
    }
    else{
        printf("not palindrome");
    }
}
