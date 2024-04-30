#include<stdio.h>

int main(){

    FILE *fptr;

    fptr = fopen("filename.txt","a");

    printf("the file is writeen \n");

    fprintf(fptr," this is created by manoj bhatta");


    fclose(fptr);

     printf("the file is closed perfectly \n");


    FILE *readpointer ;

    readpointer = fopen("filename.txt","r");
    char readString[100];

    fgets(readString,100,readpointer);

    fclose(readpointer);

    printf("%s",readString);

}