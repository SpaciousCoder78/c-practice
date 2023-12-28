#include <stdio.h>
//program for palindrome on a number
int main() {
    int n,i,rem,rev,org;
     n = 343;
     org = n;
    while(n!=0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n=n/10;
    }
    if (rev==org){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
}
