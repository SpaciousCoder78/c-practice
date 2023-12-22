#include <stdio.h>
#include<string.h>
//palindrome

int main(){
    char str[30],str2[30];
    int i;
    printf("Enter string");
    scanf("%s",str);
    strrev(str);
    printf("Reversed string: %s",str);
}
