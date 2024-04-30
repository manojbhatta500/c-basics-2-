// #include<stdio.h>


// int main(){


// FILE  *manager;

// char userInput[10000];
// fopen("filewriter.txt","a");


// printf("please enter the text you want to save on the file: ");

// scanf("%s",userInput);



// fprintf(manager,userInput);

// fclose(manager);


// printf("updated file. check it please");


// `






//     return 0;
// }

#include <stdio.h>

int main() {
    FILE *manager;

    // Open file in append mode
    manager = fopen("filewriter.txt", "a");
    if (manager == NULL) {
        printf("Error opening file.\n");
        return 1; // Return error code
    }

    char userInput[10000];

    printf("Please enter the text you want to save in the file: ");

    // Read a line of text using fgets
    fgets(userInput, sizeof(userInput), stdin);

    // Write the line to the file
    fprintf(manager, "%s", userInput);

    fclose(manager);

    printf("Updated file. Check it, please.\n");

    return 0;
}
