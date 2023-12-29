#include <stdio.h>
//sum and avg using pointer
int main(){
   int a[10],*p,n,i,sum;
   p=a;
   n=3;
   printf("enter 3 elements");
   for(i=0;i<n;i++){
       scanf("%d",p+i);
   }
   for(i=0;i<n;i++){
       sum=sum+*p;
       p++;
   }
   int avg = (float)sum/n;
   printf("Sum ; %d\n",sum);
   printf("avg: %f\n",avg);
}
