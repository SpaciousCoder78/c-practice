#include <stdio.h>
//2d array with pointers
int main(){
   int a[3][3],*p,i,j,m,n;
   printf("type mxn");
   scanf("%d%d",&m,&n);
   p=&a[0][0];
   for(i=0;i<m;i++){
       for(j=0;j<n;j++){
           scanf("%d",(*(a+i)+j));

       }
   }
   for(i=0;i<m;i++){
       for(j=0;j<n;j++){
           printf("%d",*(*(a+i)+j));
       }
       printf("\n");
   }
}
