#include <stdio.h>
//program for armstrong of a number
int main() {
    int n,i,rem,arm,old;
     n = 153;
     arm =0;
     old = n;
    while(n!=0){
        rem = n % 10;
        arm = arm + rem*rem*rem;
        n=n/10;
    }
    if (arm==old){
        printf("Armstrong");
    }
    else{
        printf("Not armstrong");
    }
}
