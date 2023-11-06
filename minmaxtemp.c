#include <stdio.h>
int main(){
	int temps[7];
	int min, max;

	printf("Enter temperatures");
	for (int i = 0; i<7; i++){
		scanf("%d",&temps[i]);
	}
	min = max = temps[0];
	printf("Temps\n");
	for (int j = 1; j<7;j++){
		if (min	> temps[j]){
			min=temps[j];
		}
		if (max<temps[j]){
			max=temps[j];
		}
	}
	printf("Max temp = %d\n",max);
	printf("Min temp = %d\n",min);

}
