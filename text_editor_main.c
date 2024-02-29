/**
*@file   text_editor_main.c
*@brief  Command line text editor using C
*@author Kishore V (vkishore9701@gmail.com)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILENAME_LENGTH 20
#define MAX_BUFFER_SIZE 1024

/**
 * @brief Main Function containing the text editor functionality.
 * @return 0 on successful execution. 
 */
int main()
{
    char filename[MAX_FILENAME_LENGTH];
    char buffer[MAX_BUFFER_SIZE];
    FILE *file = NULL;

    // Open the file 
    printf("Enter the filename to open: ");
    scanf("%s",filename);
    file = fopen(filename,"r+");
    if(file == NULL)
    {
        printf("File not found or could not be opened.");
    }
    else
    {
        printf("File open successful.");
    }

    return 0;
}
