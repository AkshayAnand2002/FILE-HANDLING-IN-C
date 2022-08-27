//THE BELOW PROGRAM CHECKS FOR USER INPUT NAME ALREADY PRESENT IN FILE OR NOT.
//IF PRESENT THEN DUPLICATE FOUND IS PRINTED.
//ELSE IT TAKE TAKES INPUTS OF NAME,ROLLNO AND DEPARTMENT TO ADD A NEW RECORD.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *fp;
	char name[20],name1[20],dept[20];
	int roll,res,f=0;
	A:
		f=0;
	printf("ENTER NAME: ");
	scanf("%s",name);
	fp=fopen("C:/Users/aksha/OneDrive/Desktop/progtext1.txt","r");
	while(fscanf(fp,"%s %d %s\n",name1,&roll,dept)!=EOF){
		res=strcmp(name,name1);
		if(res==0){
			f=1;
		}
	}
	fclose(fp);
	if(f==1){
		printf("DUPLICATE FOUND\n");
		goto A;
	}
	else{
		printf("ENTER ROLLNO: ");
		scanf("%d",&roll);
		printf("ENTER DEPARTMENT: ");
		scanf("%s",dept);
		fp=fopen("C:/Users/aksha/OneDrive/Desktop/progtext1.txt","a");
		fprintf(fp,"%s %d %s",name,roll,dept);
		fclose(fp);
		printf("DATA ENTERED SUCCESSFLY.");
	}
}
