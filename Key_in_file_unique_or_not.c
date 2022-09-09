#include<stdio.h>
#include<stdlib.h>


struct student{
int id;
char Name[30];
int CGPA;
};


int search(int gg){
struct student s;
FILE* read;
read=fopen("lab2_data.txt","r");
while(fread(&s,sizeof(s),1,read)==1){
if(s.id==gg)
return 1;
}
return 0;
}

int main(){
int n;
int gg;

struct student s;

FILE *fout;
fout= fopen("lab2_data.txt","a");
    printf("\n\tHow Many Records You Want to Enter:");
    scanf("%d",&n);
    
    
    for(int i=0;i<n;i++){
    printf("\nEnter Id of Student[%d]:",i+1);
    scanf("%d",&s.id);
    gg= s.id;
    
    printf("\nEnter Name of Student[%d]:",i+1);
    scanf("%s",s.Name);
    
    printf("\nEnter CGPA of Student[%d]:",i+1);
    scanf("%d",&s.CGPA);
     printf("\n*****************\n");
     
     
     if(search(gg)==0)
     fwrite(&s,sizeof(struct student),1,fout);
     
     else{
     printf("ID not unique\n");
     exit(1);
     }
     
    }
    
    fclose(fout);
    return 0;
    }
