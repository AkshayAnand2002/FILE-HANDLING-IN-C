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
	ptr=fopen("C:/Users/aksha/OneDrive/Desktop/progtext1.txt","w");
	fprintf(ptr,"%s %d %s",name,roll,dept);
	fclose(ptr);
	printf("RECORDS ADDED.");
	ptr=fopen("C:/Users/aksha/OneDrive/Desktop/progtext1.txt","r");
	fscanf(ptr,"%s %d %s",name,&roll,dept);
	printf("\nNAME:%s\nROLLNO:%d\nDEPARTMENT:%s",name,roll,dept);
	fclose(ptr);
}
