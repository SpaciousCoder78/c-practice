#include <stdio.h>

int main() {
    int i,j,a[30][30],b[20][20],c[45][45],m,n;
    printf("Enter mxn:");
    scanf("%d%d",&m,&n);
    printf("Enter matrix A: ");
    for ( i =0; i<m; i++){
        for (j =0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter matrix B: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Sum of A and B: ");
    for(i=0;i<m;i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d", c[i][j]);
        }
        printf("\n");
    }
}
