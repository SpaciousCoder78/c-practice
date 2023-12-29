#include <stdio.h>
//reading and displaying array using pointer
int main(){
   int *p,a[10],n,i;
   p=a;
   printf("Enter size of array");
   scanf("%d",&n);
   printf("\n Enter elements into array");
   for(i=0;i<n;i++){
       scanf("%d",p+i);
   }
   printf("Array elements are: \n");
   for(i=0;i<n;i++){
       printf("%d",*(p+i));
   }
}
