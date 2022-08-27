#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *ptr;
	char name[20],dept[20];
	int roll;
	printf("ENTER NAME: ");
	scanf("%s",name);
	printf("ENTER ROLL NO: ");
	scanf("%d",&roll);
	printf("ENTER DEPARTMENT: ");
	scanf("%s",dept);
	ptr=fopen("C:/Users/aksha/OneDrive/Desktop/progtext1.txt","a");
	fprintf(ptr,"%s %d %s\n",name,roll,dept);
	fclose(ptr);
	printf("RECORDS ADDED.");
	ptr=fopen("C:/Users/aksha/OneDrive/Desktop/progtext1.txt","r");
	while(fscanf(ptr,"%s %d %s\n",name,&roll,dept)!=EOF){
		printf("\nNAME: %s\nROLLNO: %d\nDEPARTMENT: %s\n",name,roll,dept);
	}
	fclose(ptr);
}
