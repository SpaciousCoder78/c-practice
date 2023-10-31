#include <stdio.h>
int main(){
	int i,j,m,n,p,q,r,s;
	int a[10][10],b[10][10],c[10][10];
	printf("Enter mxn");
	scanf("%d %d",&m,&n);
	printf("Enter pxq");
	scanf("%d %d",&p,&q);
	printf("Enter rs");
	scanf("%d %d",&r,&s);
	if (m!=p||n!=q){
		printf("Not a square matrix");
	}
	else {
		printf("Enter matrix");
		for (i=0;i<m;i++){
			for (j=0;j<n;j++){
				printf("Enter mn matrix");
				scanf("%d",&a[i][j]);
				
			}
		}
		for (i=0;i<m;i++){
			for (j=0;j<n;j++){
				printf("Enter pq matrix");
				scanf("%d",&b[i][j]);
			}
		}
		printf("product:");
		for (i=0;i<m;i++){
			for (j=0;j<n;j++){
				c[i][j]=a[i][j]*b[i][j];
				printf("%d",c[i][j]);
			}
			printf("\n");
		}
	}
}
