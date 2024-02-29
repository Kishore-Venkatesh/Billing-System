/* OBJECTIVE : Create a C program to provide a Command Line Text Editor */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILENAME_LENGTH 20
#define MAX_BUFFER_SIZE 1024

// A void function to display the menu of operations that can be done in a text editor
void menu()
{
    printf("\n\n======Text Editor Menu======\n\n");
    printf("1.Open File\n");
    printf("2.Close File");
    printf("\n\n==============================\n\n");
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

// A void function to close and exit the file 
void closeFile(FILE **file)
{
    if(*file != NULL)
    {
        fclose(*file);
        printf("File has been closed successfully.\n");
        printf("Exiting the Command Line Text Editor.\n");
        exit(0);
    }
    else
    {
        printf("ERROR: File is NULL.Terminating the text editor.");
        exit(1);
    }
}

// Main function for command line text editor
int main()
{
    char filename[MAX_FILENAME_LENGTH];
    char buffer[MAX_BUFFER_SIZE];
    FILE *file = NULL;

    while(1)
    {
        // Display the menu for Text Editor
        menu();
        
        // A int value taken from the user for selecting the option from the menu
        int choice;
        printf("Enter your choice: ");
        scanf("%d",&choice);

        // A seitch-case statement for the text editor menu
        switch(choice)
        {
            case 1:
            // Open the file 
            openFile(filename,&file);
            break;

            case 2:
            // Close the file
            closeFile(&file);
            break;

        }

    }
    return 0;
}
