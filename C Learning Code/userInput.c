# include <stdio.h>
# include <stdbool.h>
# include <string.h>

int main() {
    int num1;
    scanf("%i", &num1); // Need to add an & for ints and floats for the start of the variable name
    printf("Int 1: %i\n\n", num1);

    float float1; 
    scanf("%f", &float1); // Need to add an & for ints and floats for the start of the variable name
    printf("Float 1: %f\n\n", float1);

    char string1[1];
    scanf("%s", string1); // Don't need &
    printf("String 1: %s\n\n", string1);


    int num2;
    float float2;
    char string2[20];
    scanf("%i %f", &num2, &float2);
    scanf("%s", string2); // In inputs you can't have extra text, can only be the %i or %s or %f, etc
    printf("Int 2: %i, Float 2: %f, String 2: %s\n", num2, float2, string2);

    // solution to issues with scanf
    char fullname[30];
    printf("\nEnter your full name:\n");
    fgets(fullname, sizeof(fullname), stdin); // Other method of input
    printf("Hello %s", fullname);

    return 0;
}

/*
Limitations of scanf include:
- Sees whitespaces, tabs, newlines, etc as terminating characters,
Thus input needs to be all one word


In General:
- Use scanf() to get single word inputs
- Use fgets() for multi word inputs with spaces in the input

*/