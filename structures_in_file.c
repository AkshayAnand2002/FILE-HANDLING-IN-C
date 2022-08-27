#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
	int age,marks,roll;
	char name[30];
	char school[50];
};
int main(){
	FILE *fp;
	fp=fopen("C:/Users/aksha/OneDrive/Desktop/student1.dat","w");//.dat file also can be used.
	if(fp==NULL){
		printf("ERROR");
		exit(1);
	}
	struct student s1= {12,56,31,"abc","abc"};
	struct student s2={15,86,32,"cbc","cbc"};
	struct student s3={12,76,33,"bbc","bbc"};
	struct student s4={12,66,34,"xbc","xbc"};
	//writing all records into file.
	fwrite(&s1,sizeof(struct student),1,fp);
	fwrite(&s2,sizeof(struct student),1,fp);
	fwrite(&s3,sizeof(struct student),1,fp);
	fwrite(&s4,sizeof(struct student),1,fp);
	if(fwrite!=0){
		printf("CONTENTS WRITTEN INTO FILE.");
	}
	else{
		printf("ERROR.");
	}
	fclose(fp);
	return 0;
};
