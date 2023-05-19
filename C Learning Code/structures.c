# include <stdio.h>
# include <stdbool.h>
# include <string.h>

struct structure1 {
    /* data */
    int num1;
    char char1;
    char string1[50];
};

int main() {
    // Creating a structure known as s1
    struct structure1 s1;
    s1.num1 = 1; // assigning values to structure
    s1.char1 = 'A';
    strcpy(s1.string1, "Hello!!!"); // Copying string into the structure
    // String copy, and is the only way to put a string in a structure

    printf("%i\n", s1.num1);
    struct structure1 s2;
    
    // Now we have mutliple structure variables 
    // which can each hold different values for each variable
    
    // OR, YOU CAN DO THIS TO GIVE THE VARAIBLES OF A STRUCTURE CERTAIN VALUES
    struct structure1 s3 = {2, 'B', "Hello"};

    printf("%i\n %c\n %s\n", s3.num1, s3.char1, s3.string1);
    
    // Copying Structures
    struct structure1 s4 = {3, 'Z', "Flynn"};
    struct structure1 s5;
    s5 = s4;

    // Modifying values
    s5.num1 = 4;
    s5.char1 = 'L';
    // Can't do this --> s7.string1 = 'Happy';
    // Must do this:
    strcpy(s5.string1, "Something else"); // Replacing "Flynn" with "Something else"
    printf("%i\n %c\n %s\n", s5.num1, s5.char1, s5.string1);
    
    return 0;
}

/*
Structures:
- Way to group several related variables into one place
- Each varaible in a structure = member
- Structure can contain different data types
- Useful for creating "templates" for different data items (e.g., car info)
*/