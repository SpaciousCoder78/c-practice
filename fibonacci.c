#include <stdio.h>
int main(){
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	if (n<1){
		printf("Not suitable for fibonacci\n");
	}
	int prevnum1= 1;
	int prevnum2= 0;
	for (int i=0;i<=n;i++){
		if (i>2){
		int num = prevnum1 + prevnum2;
		prevnum2 = prevnum1;
		prevnum1 = num;
		printf("%d,",num);
		}
		if ( i==1){
			printf("%d",prevnum2);
		}
		if (i==2){
			printf("%d",prevnum1);
	
		}
	}

}

