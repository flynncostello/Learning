# include <stdio.h>
# include <stdbool.h>
# include <string.h>

int main() {
    
    char strin12345[20];
    fgets(strin12345, 20, stdin);

    char inputted_password[50] = "password";

    char string1[] = "Hello World!"; // Need to treat strings like an array of characters
    char string2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', '\0'}; // 0, at end of string tells compiler it is the end of the string
    printf("%s\n", string2);
    printf("%s\n", string1); // Use %s for strings
    printf("%c\n", string1[0]); // Prints "H"

    string1[0] = 'X'; // Must use single quotations
    printf("%s\n", string1);

    int i;
    for (i=0; i < 10; i++) {
        printf("%c\n", string1[i]);
    }

    char string3[] = {'h', 'q', '\n', '\0'};
    printf("%s", string3);

    char string100[50] = "Hello";
    char string101[] = "This      ";
    strcat(string100, string101);
    printf("%s", string100);

    printf("\n\n%lu", strlen(string100));
    printf("\n%lu", strlen(string101));


    printf("%lu", sizeof(string3)); // lu = unsigned int as length doesn't have + or - here
    // Length includes the \0 at the end
    
    return 0;
}