#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    const char *filename = "test.txt";  // Default filename
    
    // If command line argument is provided, use it as filename
    if (argc > 1) {
        filename = argv[1];
    }
    
    // Open file for reading
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Error: Cannot open file '%s'\n", filename);
        return 1;
    }
    
    // Read and print file content character by character
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    
    // Close file
    fclose(file);
    
    return 0;
}