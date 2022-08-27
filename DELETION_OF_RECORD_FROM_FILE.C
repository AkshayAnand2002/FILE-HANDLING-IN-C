#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *fp,*fp1;
	char name[20],dept[20],dept1[20],name1[20];
	int res,f=0,roll;
	fp=fopen("C:/Users/aksha/OneDrive/Desktop/progtext1.txt","r");
	fp1=fopen("C:/Users/aksha/OneDrive/Desktop/progtext2.txt","a");
	printf("ENTER NAME YOU WANT TO DELETE: ");
	scanf("%s",name1);
	while(fscanf(fp,"%s %d %s",name,&roll,dept)!=EOF){
		res=strcmp(name,name1);
		if(res==0){
			f=1;
		}
		else{
			fprintf(fp1,"%s %d %s\n",name,roll,dept);
		}
	}
	if(f==0){
		printf("NAME NOT FOUND.");
	}
	fclose(fp);
	fclose(fp1);
	fp=fopen("C:/Users/aksha/OneDrive/Desktop/progtext1.txt","w");//to delete contents of progtext.txt as we have required content in progtext2.txt 
	fclose(fp);
	fp=fopen("C:/Users/aksha/OneDrive/Desktop/progtext1.txt","a");
	fp1=fopen("C:/Users/aksha/OneDrive/Desktop/progtext2.txt","r");
	while(fscanf(fp1,"%s %d %s\n",name,&roll,dept)!=EOF){   //here copying the data or records from progtext2.txt to progtext1.txt
		fprintf(fp,"%s %d %s",name,roll,dept);
	}
	fclose(fp);
	fclose(fp1);
	fp1=fopen("C:/Users/aksha/OneDrive/Desktop/progtext2.txt","w"); //to delete contents of progtext2.txt
	fclose(fp1);
}
//final file after deletion in progtext1.txt
