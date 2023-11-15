#include <stdio.h>

int main() {
    int i;
    char str[30],cpstr[30];
    printf("Enter a string: ");
    scanf("%s",str);
    for (i = 0; str[i]!='\0'; i++){
        cpstr[i]=str[i];
    }
    printf("Length of string: %s",cpstr);
}
