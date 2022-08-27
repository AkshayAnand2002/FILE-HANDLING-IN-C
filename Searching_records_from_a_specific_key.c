#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *fp;
	char name1[20],name[20],dept[20];
	int res,roll,f=0;
	printf("ENTER NAME YOU WANT TO SEARCH: ");
	scanf("%s",name1);
	fp=fopen("C:/Users/aksha/OneDrive/Desktop/progtext1.txt","r");
	while(fscanf(fp,"%s %d %s\n",name,&roll,dept)!=EOF){
		res=strcmp(name,name1);
		if(res==0){
			printf("RECORDS FOUND.\n");
			printf("NAME: %s\nROLL NO: %d\nDEPARTMENT: %s\n",name,roll,dept);
			f=1;
		}
	}
	if(f==0){
		printf("NO RECORDS FOUND.\n");
	}
	fclose(fp);
}
