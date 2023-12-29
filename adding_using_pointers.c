#include <stdio.h>
//adding two numbers using pointers
int main(){
    int a,b,c,*pa,*pb,*pc;
    printf("Enter 2 nos");
    scanf("%d%d",&a,&b);
    pa = &a;
    pb = &b;
    pc = &c;
    *pc = *pa + *pb;
    printf("Sum is %d",*pc);
}
