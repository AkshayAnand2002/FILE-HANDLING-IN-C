#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *fptr;
	char string[80];
	fptr=fopen("C:/Users/aksha/OneDrive/Desktop/progtext.txt","a");//a for appending with earlier data.
	if(fptr==NULL){
		printf("ERROR");
		exit(1);
	}
	printf("ENTER STRING: ");
	gets(string);
	fflush(stdin);
	fputs(string,fptr);//fputs takes string to be stored in the file fptr.
	fclose(fptr);
	return 0;
}
