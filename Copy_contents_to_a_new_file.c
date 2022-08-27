#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *ptr;
	FILE *ptr1;
	ptr=fopen("C:/Users/aksha/OneDrive/Desktop/progtext.txt","r");
	if(ptr==NULL){
		printf("ERROR");
		exit(1);
	}
	else{
		ptr1=fopen("C:/Users/aksha/OneDrive/Desktop/progtext1.txt","w");
		char c;
		while((c=fgetc(ptr))!=EOF){
			fputc(c,ptr1);
		}
	}
	fclose(ptr);
	fclose(ptr1);
}
