#include <stdio.h>
int main(){
    char str[40];
    fgets(str,40,stdin);
    printf("String is %s",str);
}
