#include <stdio.h>
int main(){
	int a[10],search,c,n;
	printf("Enter no of elements");
	scanf("%d",&n);
	printf("Enter %d integers for the array",n);
	for (c=0;c<n;c++){
		scanf("%d",&a[c]);
	}
	printf("Enter a number to search: ");
	scanf("%d",&search);
	for (c=0;c<n;c++){
		if (a[c]==search){
			printf("%d is at %d index\n",search,c);
			break;
		}
	}
	if (c==n){
		printf("element is not in the array");
	}
}

