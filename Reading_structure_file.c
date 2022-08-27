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
	fp=fopen("C:/Users/aksha/OneDrive/Desktop/student1.dat","r");
	struct student s1;
	if(fp==NULL){
		printf("ERROR");
		exit(1);
	}
	while(fread(&s1,sizeof(struct student),1,fp)){
		printf("AGE: %d\n",s1.age);
		printf("NAME: %s\n",s1.name);
		printf("MARKS: %d\n",s1.marks);
		printf("ROLLNO: %d\n",s1.roll);
		printf("#################################\n");
	}
	fclose(fp);
	return 0;
}
