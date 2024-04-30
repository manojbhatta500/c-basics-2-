#include<stdio.h>

int main(){

    char name = 'c';

    char *add = &name;


    printf("the value of a is %c\n",name);

    printf("the address of a is %p\n",add);


    printf("another pointer method %p\n",&name);



    printf("this si defrence %c\n",*add);







}