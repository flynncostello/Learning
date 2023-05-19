# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <math.h>


int main() {
    // Here we are accessing files and opening in writing mode
    FILE *fptr; // FILE can be thought of as a data type
    fptr = fopen("pracFile1.txt", "w");
    // Absolute path has format: "C:\Desktop\GitHub\C\C Learning\pracFile1.txt"
    fprintf(fptr, "New text"); // Writing to the file, deletes old text and inserts this new text
    fclose(fptr);
    

    FILE *fptr2;
    // Opening in append mode
    // Adds contents to file without deleting old contents
    // If file doesn't exist then it will create the file before appending new text
    char filename1[] = "pracFile1.txt";
    fptr2 = fopen(filename1, "a");
    fprintf(fptr2, "\nHi!");
    fclose(fptr2);

    // Reading contents of file
    // Opening in read mode
    FILE *fptr3;
    fptr3 = fopen("pracFile1.txt", "r");

    if(fptr3 == NULL) { // Opening a file that doesn't exist returns NULL
        printf("File does not exist");
    }

    char mystring[100];

    if(fptr3 != NULL) {
        while(fgets(mystring, 100, fptr3)) {
            printf("%s", mystring); // Every loop will read the next line of the file
        } 
    } else {
        printf("File does not exist.");
    }

    fclose(fptr3);

    /*
    fgets(filestring, filesize, fptr3);
    // fgets reads text from the file and stores it in string (it only reads filesize amount of data from the file)
    printf("%s", filestring);
    fclose(fptr3);
    */

    return 0;
}

/*
File Commands:
fprintf(fptr, string) --> writes string to fptr
FILE *fptr --> makes data type for fptr as a file
fptr = fopen(filename, readtype) --> opens filename with certain 
type, i.e., r, a, or w
fclose() --> Closes a file
fgets(string_data_is_Stored_in, size of data to store, fptr) --> 
stores a certain amount of data from the file into a new string
fgets only reads the first line of the file --> need a while loop to read every line of a file
*/