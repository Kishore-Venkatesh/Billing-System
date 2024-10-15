---

# Command Line Text Editor

## Overview

The Command Line Text Editor is a simple C program that allows users to perform various text editing operations directly from the command line. Users can open, view, search, edit, save, and close text files using a straightforward menu interface.

## Features

- **Open File:** Open an existing text file for editing.
- **View Content:** Display the contents of the currently opened file.
- **Search Text:** Search for specific text within the file.
- **Clear Buffer:** Clear the current buffer to remove any stored text.
- **Edit File:** Add text to the buffer for future saving.
- **Save File:** Save the contents of the buffer to a new file or overwrite an existing one.
- **Close File:** Close the currently opened file and exit the editor.

## Installation

1. Ensure you have a C compiler installed (e.g., GCC).
2. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/command-line-text-editor.git
   cd command-line-text-editor
   ```
3. Compile the program:
   ```bash
   gcc -o text_editor text_editor.c
   ```
4. Run the program:
   ```bash
   ./text_editor
   ```

## Usage

1. **Launch the Editor:** Start the program in your terminal.
2. **Menu Navigation:** Choose an option by entering the corresponding number from the menu displayed.
3. **File Operations:** Follow the prompts to open, view, search, edit, save, or close files.

### Example Interaction

```
======Text Editor Menu======

1. Open File
2. View Content
3. Search Text
4. Clear Buffer
5. Edit File
6. Save File
7. Close File

Enter your choice: 
```

## Code Structure

### Key Functions

- **`menu()`**: Displays the main menu of options.
- **`openFile(char filename[], FILE **file)`**: Opens a specified file for editing.
- **`viewContent(FILE **file, char buffer[])`**: Views the contents of the currently opened file.
- **`searchText(FILE **file, char buffer[])`**: Searches for specified text within the file.
- **`clearBuffer(char buffer[])`**: Clears the current buffer.
- **`editFile(FILE **file, char buffer[])`**: Edits the file by adding text to the buffer.
- **`saveFile(char filename[], FILE **file, char buffer[])`**: Saves the buffer contents to a file.
- **`closeFile(FILE **file)`**: Closes the opened file and exits the editor.

### Data Types

- **`char filename[MAX_FILENAME_LENGTH]`**: Holds the name of the file.
- **`char buffer[MAX_BUFFER_SIZE]`**: Stores text for editing and saving.
- **`FILE *file`**: A pointer to the opened file.

## Considerations

- The program assumes a maximum filename length of 20 characters and a maximum buffer size of 1024 characters. Adjust these constants in the code as needed.
- Ensure that the file you want to open is in the same directory as the executable, or provide the full path.

## Contributions

Contributions are welcome! Feel free to fork the repository, make improvements, and submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgements

- Thanks to the C programming community for inspiration and resources.

---

Feel free to modify any part of this README to better fit your project's specifics or personal preferences!