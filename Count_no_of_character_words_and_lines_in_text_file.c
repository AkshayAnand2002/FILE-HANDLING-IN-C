#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *fptr;
	int countc=0,countw=0,nline=0;
	fptr=fopen("C:/Users/aksha/OneDrive/Desktop/progtext.txt","r");
	if(fptr==NULL){
		printf("ERROR");
		exit(1);
	}
	else{
		char c,w,exc;
		while(c!=EOF){
			c=fgetc(fptr);
			countc++;
			if(c=='\n'||c=='\0'){
				nline++;
			}
		}
		fseek(fptr,0,SEEK_SET);
		while(w!=EOF){
			w=fgetc(fptr);
			if(w==' '||w=='\n'||w=='\0'){
				countw++;
			}
		}
		printf("NO. OF WORDS: %d\n",countw);
		printf("NO. OF LINES: %d\n",nline);
		printf("NO. OF CHARACTERS: %d\n",countc-nline-1);
	}
}
/*
SEEK_SET	Starts the offset from the beginning of the file.
SEEK_END	Starts the offset from the end of the file.
SEEK_CUR	Starts the offset from the current location of the cursor in the file.
*/
