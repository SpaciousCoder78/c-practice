#include <stdio.h>
//program to print pattern like
/*
 * 1
 * 22
 * 333
 * 4444
 */
int main(){
    int i,j,k=1;
    for(i =1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}
