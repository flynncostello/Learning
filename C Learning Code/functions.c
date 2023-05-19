# include <stdio.h>
# include <stdbool.h>
# include <strings.h>

// Write functions first line up top then rest below main function
// Only need to include data type not variable name
void add(int);
bool func3(bool);

// Function to print characters
void printChar(char string1[], float float1) {
    printf("Printing string now...\n");
    printf("%s\n", string1);
    printf("%f\n", float1);
}

int num1 = 2;
char string1[] = "Hello";
float float1 = 1.12345843;


// Calling function in main
int main() {
    add(num1);
    printf("%i\n", num1);
    printChar(string1, float1);

    return 0;
}


void add(int num1) {
    printf("Adding numbers 1 and 2 together...\n");
    printf("%i\n", num1);
}


bool func3(bool bool1) {
    printf("%i\n", bool1);
    return bool1;
}
