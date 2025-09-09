#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    const char *filename = "test.txt";  // Default filename
    const char *content = "aiueo";
    
    // If command line argument is provided, use it as filename
    if (argc > 1) {
        filename = argv[1];
    }
    
    // Open file for writing
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        fprintf(stderr, "Error: Cannot create file '%s'\n", filename);
        return 1;
    }
    
    // Write content to file
    fprintf(file, "%s", content);
    
    // Close file
    fclose(file);
    
    printf("Successfully wrote '%s' to file '%s'\n", content, filename);
    return 0;
}