#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
	FILE *fptr;
	char str[80];
	fptr=fopen("C:/Users/aksha/OneDrive/Desktop/progtext.txt","r");
	if(fptr==NULL){
		printf("ERROR");
		exit(1);
	}
	while(fgets(str,80,fptr)!=NULL){//getting a string of size 80 from fptr.
		printf("%s",str);
	}
	fclose(fptr);
}





























//	if(fptr=fopen("C:/Users/aksha/OneDrive/Desktop/progtext.txt","r")==NULL){
//		printf("ERROR");
//		exit(1);
//	}
//	fscanf(fptr,"%d",&num);
//	printf("VALUE: %d",num);
//	fclose(fptr);
//	return 0;
