#include<stdio.h>
int main(){
	char firstName[10];
	char lastName[10];
	char fullName[40];
	printf("Enter the first name : ");
	scanf("%s", firstName);
	printf("Enter the lastName : ");
	scanf("%s", lastName);
	sprintf(fullName, "%s %s", firstName, lastName);
	printf("FullName = %s\n", fullName);
	return 0;
}
