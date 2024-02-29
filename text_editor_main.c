/* OBJECTIVE : Create a C program to provide a Command Line Text Editor */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILENAME_LENGTH 20
#define MAX_BUFFER_SIZE 1024

// A void function to display the menu of operations that can be done in a text editor
void menu()
{
    printf("\n ======Text Editor Menu======\n");
    printf("1.Open File");
    printf("\n==============================\n");
}

// A void function that opens the file if the file exists
void openFile(char filename[MAX_FILENAME_LENGTH],FILE **file)
{
    printf("Enter the filename to open: ");
    scanf("%s",filename);
    *file = fopen(filename,"r+");
    if(*file == NULL)
    {
        printf("File not found or could not be opened.\n");
    }
    else
    {
        printf("File open successful.\n");
    }
}

// Main function for command line text editor
int main()
{
    char filename[MAX_FILENAME_LENGTH];
    char buffer[MAX_BUFFER_SIZE];
    FILE *file = NULL;

    // Display the menu
    menu();

    int choice;
    printf("Enter your choice: ");
    scanf("%d",&choice);

    while(1)
    {

        switch(choice)
        {
            case 1:
            // Open the file 
            openFile(filename,&file);
            break;

        }

    }
    return 0;
}
