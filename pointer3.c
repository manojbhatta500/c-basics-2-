#include<stdio.h>

void main(){

    int a[4] = {0,1,2,3};
    int length  = sizeof(a)/sizeof(a[0]);


    printf("the storage of single array item is %lu\n",sizeof(a[0]));
    printf("the storage of total array item is %lu\n",sizeof(a));
    printf("the length of item arrays %d\n",length);


    for (int j = 0;j<length;j++ ){
        printf("the address of array item is %p\n",&a[j]);
        printf("the value of stored item is%d \n",a[j]);
        
    }




}