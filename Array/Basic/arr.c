#include<stdio.h>
int main(){
	int n;
	printf("Enter How many element want to add: ");
	scanf("%d", &n);
	int arr[n];
	int sum = 0;
	for(int j = 0; j < n; j++){
		scanf("%d", &arr[j]);
	}
	printf("The Array Element is... \n");
	for(int i = 0; i < n; i++){
		printf("%d \n", arr[i]);
	}
	printf("Sum of elements in an Array...\n");
	for(int k = 0; k < n; k++){
		sum += arr[k];	
	}
	int avg = sum / n;
	printf("Total: %d \n", sum);
	printf("Average: %d \n", avg);
	return 0;
}
