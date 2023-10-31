#include <stdio.h>
int main(){
	int i,j,m,n,p,q;
	int a[10][10],b[10][10];
	printf("enter mxn");
	scanf("%d %d",&m,&n);
	printf("Enter the matrix\n");
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered matrix is\n");
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matrix:\n");
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			b[i][j]=a[j][i];
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
}