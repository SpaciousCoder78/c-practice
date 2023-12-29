#include <stdio.h>
//max array element using pointer
int main(){
   int *p,a[10],n,i;
   p=a;
   printf("Enter size of array");
   scanf("%d",&n);
   printf("Enter array elements");
   for(i=0;i<n;i++){
       scanf("%d",p+i);

   }
   int max = a[0];
   for(i=0;i<n;i++){
       if(max<=*p){
           max=*p;
           p++;
       }
   }
   printf("Max: %d",max);
}
