#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
	FILE *fptr;
	fptr=fopen("C:/Users/aksha/OneDrive/Desktop/progtext.txt","w");
	if(fptr==NULL){
		printf("ERROR");
		exit(1);
	}
	printf("ENTER NUMBER: ");
	scanf("%d",&num);
	fprintf(fptr,"%d",num);
	fclose(fptr);
	return 0;
}
//takes user input and store in the file.
