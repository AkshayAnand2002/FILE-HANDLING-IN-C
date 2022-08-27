#include<stdio.h>
#include<string.h>
struct details
{
    char name[10];
    int age;
    char city[10];
}arr[10];

//Constructing structure to store values of file
int main()
{
    FILE *fp;
    FILE *fo;
    int i,n=3,newAge;
    char nam[30];
    fp=fopen("C:/Users/aksha/OneDrive/Desktop/input.txt","r");//input file

    /*
      The contents of input file are
      Olaf 30 Boston
      Winny 22 chicago 
      Elsa 45 Miami
    */
    fo=fopen("C:/Users/aksha/OneDrive/Desktop/output.txt","w");//output file
    if(fp==NULL)
	{
		printf("Error cannot open file\n");
	}
    for(i=0;i<n;i++)
	{
		fscanf(fp,"%s %d %s",arr[i].name,&arr[i].age,arr[i].city);		
	}//storing values from file into structure
    printf("Enter name whos age must be changed:");
    scanf("%s",&nam);
    printf("Enter new age:");
    scanf("%d",&newAge);
    for(i=0;i<n;i++)
    {
        if(strcmp(nam,arr[i].name)==0)
        {
            arr[i].age=newAge;
        }
    }//changing values in struct accordingly with name elsa
    if(fo==NULL)
	{
		printf("Error cannot open file\n");
	}
    for(i=0;i<n;i++)
	{
	   fprintf(fo,"%s\t%d\t%s\n",arr[i].name,arr[i].age,arr[i].city);
	}//printing modified content into output file

    /*
      The contents of output file are
      Olaf 30 Boston
      Winny 22 chicago 
      Elsa 18 Miami
    */
    fclose(fp);
    fclose(fo);
    return 0;
}
