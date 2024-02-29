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
    printf("2.View Content\n");
    printf("3.Search Text\n");
    printf("4.Close File");
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

// A void function to view the contents of the file
void viewContent(FILE **file,char buffer[MAX_BUFFER_SIZE])
{
    if(file != NULL)
    {
        // Move the file pointer to the beginning of the file
        rewind(*file);
        printf("Contents of the File:\n");
        int lineNumber = 1;
        while(fgets(buffer,MAX_BUFFER_SIZE,*file) != NULL)
        {
            printf("%d: %s",lineNumber++,buffer);
        }
        printf("\n");
    }
    else
    {
        printf("No file is currently open.\n");
    }
}

// A void function to search text in the file
void searchText(FILE **file,char buffer[MAX_BUFFER_SIZE])
{
    if(*file != NULL)
    {
        char search[MAX_BUFFER_SIZE];
        printf("Enter text to search: ");
        scanf("%s[^\n]",search);
        rewind(*file);
        int lineNumber=1;
        while(fgets(buffer,MAX_BUFFER_SIZE,*file) != NULL)
        {
            if(strstr(buffer,search) != NULL)
            {
                printf("Found: %s",buffer);
            }
            lineNumber++;
        }
        printf("\n");
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

        // A switch-case statement for the text editor menu
        switch(choice)
        {
            case 1:
            // Open the file 
            openFile(filename,&file);
            break;
            
            case 2:
            // View the contents of the file 
            viewContent(&file,buffer);
            break;

            case 3:
            // Search for text in file 
            searchText(&file,buffer);
            break;

            case 4:
            // Close the file
            closeFile(&file);
            break;

        }

    }
    return 0;
}
